****

http://drupal.org/node/1275284

****

diff --git a/conditional_fields.module b/conditional_fields.module
index 23b8cb2..6644c2c 100644
--- a/conditional_fields.module
+++ b/conditional_fields.module
@@ -1045,7 +1045,9 @@ function conditional_fields_load_dependencies($entity_type = NULL, $bundle = NUL
   }
 
   if (!isset($dependencies[$entity_type][$bundle])) {
-    $dependencies[$entity_type][$bundle] = array();
+    if(!is_null($entity_type) && !is_null($bundle)){
+      $dependencies[$entity_type][$bundle] = array();
+    }
     $default_options = conditional_fields_dependency_default_options();
 
     $select = db_select('conditional_fields', 'cf')
diff --git a/includes/conditional_fields.features.inc b/includes/conditional_fields.features.inc
index c3ad326..d7aec44 100644
--- a/includes/conditional_fields.features.inc
+++ b/includes/conditional_fields.features.inc
@@ -48,16 +48,17 @@ function conditional_fields_features_export_render($module_name = '', $data) {
 
     if (isset($dependencies[$entity]) && isset($dependencies[$entity][$bundle])) {
       $info = $dependencies[$entity][$bundle];
-      foreach ($info as $k => $v) {
-        if (isset($v['dependees'])) {
+      foreach ($info['dependents'] as $dependent_field_name => $dependees) {
+        foreach ($dependees as $dependee) {
+
           $code[] = '  $items[] = array(';
           $code[] = "    'entity' => '" . $entity . "',";
           $code[] = "    'bundle' => '" . $bundle . "',";
-          $code[] = "    'dependent' => '" . $k . "',";
-          $dependee = array_keys($v['dependees']);
-          $code[] = "    'dependee' => '" . $dependee[0] . "',";
+          $code[] = "    'dependent' => '" . $dependent_field_name . "',";
+          $code[] = "    'dependee' => '" . $dependee['dependee'] . "',";
+
           $code[] = "    'options' => ";
-          $vals = explode("\n", var_export($v['dependees'][$dependee[0]]['options'], TRUE));
+          $vals = explode("\n", var_export($dependee['options'], TRUE));
           // $code += $vals would work just as well here, but this formats the output nicer.
           foreach ($vals as $val) {
             $code[] = '      ' . $val;
@@ -94,10 +95,12 @@ function conditional_fields_features_rebuild($module) {
     $node_types = array();
     foreach ($defaults as $field) {
       if (isset($dependencies[$field['entity']][$field['bundle']])) {
-        foreach ($dependencies[$field['entity']][$field['bundle']] as $k => $v) {
-          if (isset($v['dependees'])) {
-            foreach ($v['dependees'] as $foo => $bar) {
-              $deps_to_remove[$bar['id']] = $bar['id'];
+        foreach ($dependencies[$field['entity']][$field['bundle']] as $dependancy_type => $field_dep_settings) {
+          if ($dependancy_type == 'dependees' && !empty($field_dep_settings)) {
+            foreach ($field_dep_settings as $dep_setting) {
+              foreach($dep_setting as $id => $dep_settings){
+                $deps_to_remove[$id] = $id;
+              }
             }
           }
         }
