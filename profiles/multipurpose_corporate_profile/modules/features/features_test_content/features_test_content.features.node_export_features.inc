<?php
/**
 * @file
 * features_test_content.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function features_test_content_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'27\',
      \'uid\' => \'1\',
      \'title\' => \'Client four\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ee25c8c0-b925-4081-9b66-214c9bcd4f4a\',
      \'nid\' => \'27\',
      \'type\' => \'clients\',
      \'language\' => \'und\',
      \'created\' => \'1429246746\',
      \'changed\' => \'1429251813\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'02ae7dff-543d-4353-a7cb-b57d11e3d0f9\',
      \'revision_timestamp\' => \'1429251813\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_clients_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'4.png\',
            \'uri\' => \'public://4.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'4265\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429251813\',
            \'uuid\' => \'52afd5eb-0168-42f9-9b07-da9753784a41\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'104\',
            \'height\' => \'119\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/4.png\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429246746\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'31\',
        \'source\' => \'node/27\',
        \'alias\' => \'content/client-four\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'33\',
      \'uid\' => \'1\',
      \'title\' => \'Stewart Griffin\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'346a101b-aae7-4de7-aac1-92fda3307ec0\',
      \'nid\' => \'33\',
      \'type\' => \'team_member\',
      \'language\' => \'und\',
      \'created\' => \'1429252376\',
      \'changed\' => \'1429252376\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'05271c13-3f5f-4627-b17b-00146f3d4aa1\',
      \'revision_timestamp\' => \'1429252376\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>CEO. Recruits new agents and kills the ones that betrayed the values of the organization.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>CEO. Recruits new agents and kills the ones that betrayed the values of the organization.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_photo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'Layer 20.jpg\',
            \'uri\' => \'public://Layer 20.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'6309\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429252376\',
            \'uuid\' => \'7c5a9b20-3c20-407c-93f2-8f370ceaaa86\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'180\',
            \'height\' => \'180\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/Layer 20.jpg\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429252376\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'37\',
        \'source\' => \'node/33\',
        \'alias\' => \'content/jerry-smith-jr-3\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'22\',
      \'uid\' => \'1\',
      \'title\' => \'Protective\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'deafaf37-8a6e-4431-9245-ec606dd5b5ee\',
      \'nid\' => \'22\',
      \'type\' => \'dignities\',
      \'language\' => \'und\',
      \'created\' => \'1429177448\',
      \'changed\' => \'1429245548\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'0a790654-d8be-4eff-89ba-12ee6388a5ea\',
      \'revision_timestamp\' => \'1429245548\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Secures your mind the way meditation&nbsp;would never do.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Secures your mind the way meditation would never do.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'14.png\',
            \'uri\' => \'public://14.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'1061\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429245548\',
            \'uuid\' => \'e956dfc5-bab1-4b92-8c8f-af767c304380\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'78\',
            \'height\' => \'89\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/14.png\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429177448\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'26\',
        \'source\' => \'node/22\',
        \'alias\' => \'content/powerful-cms\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'Philip J. Fry\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3679d8fd-48c3-489c-9444-f603087f080c\',
      \'nid\' => \'5\',
      \'type\' => \'team_member\',
      \'language\' => \'und\',
      \'created\' => \'1428985302\',
      \'changed\' => \'1429246403\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'117bb217-7be4-4171-b225-0ee971529e06\',
      \'revision_timestamp\' => \'1429246403\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Makes sure that the printing machines never run out of paper and that coffee machines always have fresh beans.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Makes sure that the printing machines never run out of paper and that coffee machines always have fresh beans.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_photo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'Layer 2.jpg\',
            \'uri\' => \'public://Layer 2.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'7276\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429246403\',
            \'uuid\' => \'70d04211-fa27-4766-8e83-469547833f92\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'180\',
            \'height\' => \'180\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/Layer 2.jpg\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1428985302\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'8\',
        \'source\' => \'node/5\',
        \'alias\' => \'content/jerry-smith-jr-0\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'30\',
      \'uid\' => \'1\',
      \'title\' => \'Client seven\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0c247588-9f55-4d3e-8139-07386bf1ed35\',
      \'nid\' => \'30\',
      \'type\' => \'clients\',
      \'language\' => \'und\',
      \'created\' => \'1429251706\',
      \'changed\' => \'1429251706\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1a014a12-fabc-4395-a30c-605caff451de\',
      \'revision_timestamp\' => \'1429251706\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_clients_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'1.png\',
            \'uri\' => \'public://1_0.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'3484\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429251706\',
            \'uuid\' => \'b892d6ad-66d7-4f36-8a0f-62db24b6b8c1\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'138\',
            \'height\' => \'90\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/1_0.png\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429251706\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'34\',
        \'source\' => \'node/30\',
        \'alias\' => \'content/client-seven\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'25\',
      \'uid\' => \'1\',
      \'title\' => \'Stylish\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e5032f77-3cc3-43c4-beb8-f644ee6d3aa4\',
      \'nid\' => \'25\',
      \'type\' => \'dignities\',
      \'language\' => \'und\',
      \'created\' => \'1429245679\',
      \'changed\' => \'1429245679\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1a722b99-ff5d-4746-a920-687ccdc363eb\',
      \'revision_timestamp\' => \'1429245679\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>So fashionable even the Queen would kill for this.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>So fashionable even the Queen would kill for this.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'13.png\',
            \'uri\' => \'public://13.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'816\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429245679\',
            \'uuid\' => \'d3f64264-82c8-4360-94d8-8c65ef83780b\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'83\',
            \'height\' => \'83\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/13.png\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429245679\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'29\',
        \'source\' => \'node/25\',
        \'alias\' => \'content/excellent-theme-power-your-website\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'44\',
      \'uid\' => \'1\',
      \'title\' => \'Lorem ipsum dolor sit amet\',
      \'log\' => \'\',
      \'status\' => \'0\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b31df3ff-a618-4d2c-a0e8-ab98036c5fc6\',
      \'nid\' => \'44\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1429685997\',
      \'changed\' => \'1429692259\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1ed03359-4beb-4d22-a609-6ba5946ccb66\',
      \'revision_timestamp\' => \'1429692259\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_portfolio_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'06.jpg\',
            \'uri\' => \'public://06_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'402889\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429692259\',
            \'uuid\' => \'1db28588-3921-4830-9b7e-894ccc3b5f11\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1463\',
            \'height\' => \'598\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/06_0.jpg\',
          ),
        ),
      ),
      \'field_portfolio_terms\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429685997\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'49\',
        \'source\' => \'node/44\',
        \'alias\' => \'content/lorem-ipsum-dolor-sit-amet-7\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'42\',
      \'uid\' => \'1\',
      \'title\' => \'Crop Circles\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0e8ff9fa-ec7f-4ee0-b5bd-7b5ea9bd5783\',
      \'nid\' => \'42\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1429685922\',
      \'changed\' => \'1429692274\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'21cc6fef-8473-4393-a34f-0132d1b0cca7\',
      \'revision_timestamp\' => \'1429692274\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>No human could do these circles by himself. They are made by aliens, I guarantee it!</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>No human could do these circles by himself. They are made by aliens, I guarantee it!</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_portfolio_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'crop-circle.jpg\',
            \'uri\' => \'public://crop-circle.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'311778\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429692274\',
            \'uuid\' => \'905dbe74-6ad1-47cc-8114-3e1633c44410\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1720\',
            \'height\' => \'1132\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/crop-circle.jpg\',
          ),
        ),
      ),
      \'field_portfolio_terms\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429685922\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'47\',
        \'source\' => \'node/42\',
        \'alias\' => \'content/lorem-ipsum-dolor-sit-amet-5\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'46\',
      \'uid\' => \'1\',
      \'title\' => \'Lorem ipsum dolor sit amet\',
      \'log\' => \'\',
      \'status\' => \'0\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f3b5e0de-e9f2-44e9-aa15-7561139f052b\',
      \'nid\' => \'46\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1429687451\',
      \'changed\' => \'1429692243\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2d919121-ec85-4533-afad-9eab0a4d6e4a\',
      \'revision_timestamp\' => \'1429692243\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_portfolio_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'04.jpg\',
            \'uri\' => \'public://04_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'252144\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429692243\',
            \'uuid\' => \'fdcbc68c-217e-4303-9ebc-da4adb28ccbc\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'932\',
            \'height\' => \'608\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/04_0.jpg\',
          ),
        ),
      ),
      \'field_portfolio_terms\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429687451\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'51\',
        \'source\' => \'node/46\',
        \'alias\' => \'content/lorem-ipsum-dolor-sit-amet-9\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'1\',
      \'title\' => \'Janet Jackson\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cedc752f-c8d8-420e-9f9b-714231f9acfd\',
      \'nid\' => \'4\',
      \'type\' => \'team_member\',
      \'language\' => \'und\',
      \'created\' => \'1428985256\',
      \'changed\' => \'1429246410\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2eed9e35-8abc-4526-bc3e-65e5aef23884\',
      \'revision_timestamp\' => \'1429246410\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>The brain centre of the whole system and the reincarnation of Sherlock Holmes, she uncovers even the most mysterious conspiracy plots.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The brain centre of the whole system and the reincarnation of Sherlock Holmes, she uncovers even the most mysterious conspiracy plots.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_photo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'Layer 3.jpg\',
            \'uri\' => \'public://Layer 3.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'9519\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429246410\',
            \'uuid\' => \'233599b4-c471-4570-b2ac-6f9a9e0a4f11\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'180\',
            \'height\' => \'180\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/Layer 3.jpg\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1428985256\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'7\',
        \'source\' => \'node/4\',
        \'alias\' => \'content/jerry-smith-jr\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'The Flat Earth Theory\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d0f4df84-4f88-4913-aa97-1fa0cb9f209c\',
      \'nid\' => \'7\',
      \'type\' => \'blog_entry\',
      \'language\' => \'und\',
      \'created\' => \'1428986002\',
      \'changed\' => \'1429254207\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3128a1ef-be29-43b5-b811-1351cf94d125\',
      \'revision_timestamp\' => \'1429254207\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><br />\\r\\nHow does a plane flying from New York to London end up having the same times either way they fly? Whether flying east or west, the plane takes the same time to get there?! The plane takes the same time to get to it\'s destination whether flying from New York to London, or from London back to New York! Right there, this proves that there is no ball earth spinning at a 1000mph eastward as the scientific elite tell us!</p>\\r\\n\\r\\n<p>&nbsp;Why can a boat see a lighthouse from the sea 80 miles away? The curvature of the earth wouldn\'t allow a lighthouse to be seen that far away, but it can be seen on a flat earth. Every mile away an object is it would go lower and lower, to the amount of about a half a mile below the curved horizon from 80 miles away, but the lighthouse is only around 200 ft high! Explain that one.&nbsp;</p>\\r\\n\\r\\n<p>&nbsp;Let me just start talking to you here: NASA is a satanic organization created by the Nazi\'s that came over after WW2, Freemasons run NASA and are the astronauts, there are no planets spinning around the sun – they are &nbsp;close in stars and lights, the sun and the moon are circling around the top of the flat earth from only about 3,000 miles away and they are the same size, there are no satellites, there is no real pictures of the earth that are not manipulated- and only one that is used in all the books from Apollo missions window!, Antarctica surrounds the disc shaped earth\'s edges, the Bible talks about the earth being fixed and unmovable, the Bible calls the earth a circle (not a ball), the horizon is always eye level no matter how far you go up into the air (20,000 ft. a non-government camera has been), ancient cultures all thought the earth was flat until 500 years ago when Jesuit Priest said otherwise (Jesuits!), Antarctica is off limits to private industry although it has vast resources, no private explorer can explore the North Pole or Antarctica, and on and on....</p>\\r\\n\\r\\n<p>&nbsp;There is so much evidence that the earth is actually flat it\'s unbelievable. I learned about the hollow earth theory before a couple years ago, and I actually thought there was something to that, but it didn\'t resonate with my soul like this Flat Earth thought has. Spiritually, this reality of a flat earth settles in my soul and being with the up-most peace and reality. It\'s as if I knew it all along. I mean, flying around on a spinning earth in some vast universe just never clicked with me. From all observance, we are stationary and the earth is flat, not spinning and I don\'t care what some Jesuit says about some un-provable theories they made up about gravity and the solar system – it\'s all a lie!</p>\\r\\n\\r\\n<p>&nbsp;Now, I\'ve brought up some points, but as I said you are going to have to research this more on your own. I know you\'ll have some questions as I did, but as far as I\'m concerned, those questions can be answered much better than the questions you\'ll start to have about this earth being a ball that is flying around the sun.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>How does a plane flying from New York to London end up having the same times either way they fly? Whether flying east or west, the plane takes the same time to get there?! The plane takes the same time to get to it\'s destination whether flying from New York to London, or from London back to New York! Right there, this proves that there is no ball earth spinning at a 1000mph eastward as the scientific elite tell us!</p>\\n<p> Why can a boat see a lighthouse from the sea 80 miles away? The curvature of the earth wouldn\'t allow a lighthouse to be seen that far away, but it can be seen on a flat earth. Every mile away an object is it would go lower and lower, to the amount of about a half a mile below the curved horizon from 80 miles away, but the lighthouse is only around 200 ft high! Explain that one. </p>\\n<p> Let me just start talking to you here: NASA is a satanic organization created by the Nazi\'s that came over after WW2, Freemasons run NASA and are the astronauts, there are no planets spinning around the sun – they are  close in stars and lights, the sun and the moon are circling around the top of the flat earth from only about 3,000 miles away and they are the same size, there are no satellites, there is no real pictures of the earth that are not manipulated- and only one that is used in all the books from Apollo missions window!, Antarctica surrounds the disc shaped earth\'s edges, the Bible talks about the earth being fixed and unmovable, the Bible calls the earth a circle (not a ball), the horizon is always eye level no matter how far you go up into the air (20,000 ft. a non-government camera has been), ancient cultures all thought the earth was flat until 500 years ago when Jesuit Priest said otherwise (Jesuits!), Antarctica is off limits to private industry although it has vast resources, no private explorer can explore the North Pole or Antarctica, and on and on....</p>\\n<p> There is so much evidence that the earth is actually flat it\'s unbelievable. I learned about the hollow earth theory before a couple years ago, and I actually thought there was something to that, but it didn\'t resonate with my soul like this Flat Earth thought has. Spiritually, this reality of a flat earth settles in my soul and being with the up-most peace and reality. It\'s as if I knew it all along. I mean, flying around on a spinning earth in some vast universe just never clicked with me. From all observance, we are stationary and the earth is flat, not spinning and I don\'t care what some Jesuit says about some un-provable theories they made up about gravity and the solar system – it\'s all a lie!</p>\\n<p> Now, I\'ve brought up some points, but as I said you are going to have to research this more on your own. I know you\'ll have some questions as I did, but as far as I\'m concerned, those questions can be answered much better than the questions you\'ll start to have about this earth being a ball that is flying around the sun.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_blog_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'flat-earth-theory.jpg\',
            \'uri\' => \'public://flat-earth-theory.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'156747\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429254207\',
            \'uuid\' => \'8529a5b6-53f1-4628-8519-1ac1a9ec8c41\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1920\',
            \'height\' => \'1080\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/flat-earth-theory.jpg\',
          ),
        ),
      ),
      \'field_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1428986002\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'disqus\' => array(
        \'domain\' => \'themecorporatev2\',
        \'status\' => TRUE,
        \'url\' => \'http://127.0.0.1:2525/blog/lorem-ipsum-dolor-sit-amet-consectetur-adipiscing-elits\',
        \'title\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. \',
        \'identifier\' => \'node/7\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'10\',
        \'source\' => \'node/7\',
        \'alias\' => \'blog/lorem-ipsum-dolor-sit-amet-consectetur-adipiscing-elits\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'15\',
      \'uid\' => \'1\',
      \'title\' => \'Client Three\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'773143f4-b8f1-43c6-8df1-f2e3d7fbea72\',
      \'nid\' => \'15\',
      \'type\' => \'clients\',
      \'language\' => \'und\',
      \'created\' => \'1428997705\',
      \'changed\' => \'1429246638\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'347e2d2d-5e2d-4a52-bab6-a33811699064\',
      \'revision_timestamp\' => \'1429246638\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_clients_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'3.png\',
            \'uri\' => \'public://3.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'3453\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429246638\',
            \'uuid\' => \'97d8649a-d942-412e-8c8d-44c02450af5c\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'138\',
            \'height\' => \'88\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/3.png\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1428997705\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'19\',
        \'source\' => \'node/15\',
        \'alias\' => \'content/client-three\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'48\',
      \'uid\' => \'1\',
      \'title\' => \'Lorem ipsum dolor sit amet\',
      \'log\' => \'\',
      \'status\' => \'0\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e6fedb3e-0379-4137-b9cc-173ea33d7373\',
      \'nid\' => \'48\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1429687496\',
      \'changed\' => \'1429692226\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3c937218-6513-47d5-88bf-e513e53d1428\',
      \'revision_timestamp\' => \'1429692226\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_portfolio_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'02.jpg\',
            \'uri\' => \'public://02_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'460940\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429692226\',
            \'uuid\' => \'4fc6c24d-465c-4308-bd07-e9d66613cdd7\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'951\',
            \'height\' => \'634\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/02_0.jpg\',
          ),
        ),
      ),
      \'field_portfolio_terms\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429687496\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'53\',
        \'source\' => \'node/48\',
        \'alias\' => \'content/lorem-ipsum-dolor-sit-amet-11\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'8\',
      \'uid\' => \'1\',
      \'title\' => \'The Reptilian Elite\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ca64e9fc-761c-48e3-89c7-64a154541c0b\',
      \'nid\' => \'8\',
      \'type\' => \'blog_entry\',
      \'language\' => \'und\',
      \'created\' => \'1428986014\',
      \'changed\' => \'1429687772\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3de1f405-c7eb-418a-a682-e96498adbf93\',
      \'revision_timestamp\' => \'1429687772\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>They are among us. Blood-drinking, flesh-eating, shape-shifting extraterrestrial reptilian humanoids with only one objective in their cold-blooded little heads: to enslave the human race. They are our leaders, our corporate executives, our beloved Oscar-winning actors and Grammy-winning singers!</p>\\r\\n\\r\\n<p>The conspiracy theorist and New Age philosopher, who wore only turquoise for a time and insisted on being called Son of God-Head, says these \\"Annunaki\\" (the reptiles) have controlled humankind since ancient times; they count among their number some royal figures, presidents of big countries and their assistants.&nbsp;Encroaching on other conspiracy theorists\' territory, Son of God-Head&nbsp;even claims that the lizards are behind secret societies like the Freemasons and the Illuminati.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>They are among us. Blood-drinking, flesh-eating, shape-shifting extraterrestrial reptilian humanoids with only one objective in their cold-blooded little heads: to enslave the human race. They are our leaders, our corporate executives, our beloved Oscar-winning actors and Grammy-winning singers!</p>\\n<p>The conspiracy theorist and New Age philosopher, who wore only turquoise for a time and insisted on being called Son of God-Head, says these \\"Annunaki\\" (the reptiles) have controlled humankind since ancient times; they count among their number some royal figures, presidents of big countries and their assistants. Encroaching on other conspiracy theorists\' territory, Son of God-Head even claims that the lizards are behind secret societies like the Freemasons and the Illuminati.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_blog_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'reptilian_211.jpg\',
            \'uri\' => \'public://reptilian_211.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'36404\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429254222\',
            \'uuid\' => \'5893eb86-e884-4f7f-8647-8910dfa096ff\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'532\',
            \'height\' => \'465\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/reptilian_211.jpg\',
          ),
        ),
      ),
      \'field_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'7\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1428986014\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'disqus\' => array(
        \'domain\' => \'themecorporatev2\',
        \'status\' => TRUE,
        \'url\' => \'http://127.0.0.1:2525/blog/lorem-ipsum-dolor-sit-amet-consectetur-adipiscing-elit-0\',
        \'title\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. \',
        \'identifier\' => \'node/8\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'11\',
        \'source\' => \'node/8\',
        \'alias\' => \'blog/lorem-ipsum-dolor-sit-amet-consectetur-adipiscing-elit-0\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'20\',
      \'uid\' => \'1\',
      \'title\' => \'Supreme Tin Foil Hat\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'141851b6-b4bf-4cbd-bbed-93a9f6072bc9\',
      \'nid\' => \'20\',
      \'type\' => \'secondary_slider\',
      \'language\' => \'und\',
      \'created\' => \'1429177273\',
      \'changed\' => \'1429245854\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3e6ac3ef-30ff-4dc7-a0d6-cb60e1b1d785\',
      \'revision_timestamp\' => \'1429245854\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>A posh accessory designed in the Soho labs by the incognito master. As fashionable as effective the hat helps you to tune into the vibes of the Cosmos effortlessly.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>A posh accessory designed in the Soho labs by the incognito master. As fashionable as effective the hat helps you to tune into the vibes of the Cosmos effortlessly.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'slide-1.png\',
            \'uri\' => \'public://slide-1.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'138016\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429245854\',
            \'uuid\' => \'d43bfb9a-e0a2-4dae-8ef8-dbb91c2e4a9e\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'272\',
            \'height\' => \'441\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/slide-1.png\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429177273\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'24\',
        \'source\' => \'node/20\',
        \'alias\' => \'content/our-templates-are-nice-and-beatiful-they-exactly-fits-your-needs\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'49\',
      \'uid\' => \'1\',
      \'title\' => \'Lorem ipsum dolor sit amet\',
      \'log\' => \'\',
      \'status\' => \'0\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9e71f071-36da-4d64-8d42-368d1d79f687\',
      \'nid\' => \'49\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1429687516\',
      \'changed\' => \'1429692217\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'428f2da1-e92a-42a2-b80d-a1a1ef8ae10c\',
      \'revision_timestamp\' => \'1429692217\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_portfolio_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'01.jpg\',
            \'uri\' => \'public://01_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'259797\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429692217\',
            \'uuid\' => \'d834c07b-8da0-46f0-bc63-6fc4f21b04b2\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'925\',
            \'height\' => \'575\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/01_0.jpg\',
          ),
        ),
      ),
      \'field_portfolio_terms\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429687516\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'54\',
        \'source\' => \'node/49\',
        \'alias\' => \'content/lorem-ipsum-dolor-sit-amet-12\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'26\',
      \'uid\' => \'1\',
      \'title\' => \'Symbolic\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d1c017c9-f028-4e57-a2d0-9bd85fe26041\',
      \'nid\' => \'26\',
      \'type\' => \'dignities\',
      \'language\' => \'und\',
      \'created\' => \'1429245713\',
      \'changed\' => \'1429245713\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'51a10236-0a7a-4164-ae3e-6ac01829cedf\',
      \'revision_timestamp\' => \'1429245713\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Lets you notice the&nbsp;kindred souls around.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lets you notice the kindred souls around.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'12.png\',
            \'uri\' => \'public://12.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'706\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429245713\',
            \'uuid\' => \'b27c6b59-54bf-4538-af29-1e0edd2b0dea\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'74\',
            \'height\' => \'78\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/12.png\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429245713\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'30\',
        \'source\' => \'node/26\',
        \'alias\' => \'content/lot-options-customization\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'40\',
      \'uid\' => \'1\',
      \'title\' => \'Lorem ipsum dolor sit amet\',
      \'log\' => \'\',
      \'status\' => \'0\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b0a81a80-1193-445b-8d78-056aef3b26bf\',
      \'nid\' => \'40\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1429684077\',
      \'changed\' => \'1429692286\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5f81328b-7612-451d-8a8d-fe3c2393d366\',
      \'revision_timestamp\' => \'1429692286\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_portfolio_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'10.jpg\',
            \'uri\' => \'public://10.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'235138\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429692286\',
            \'uuid\' => \'bfc84dff-0c9a-4080-8351-a1fb424d1e6d\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'951\',
            \'height\' => \'588\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/10.jpg\',
          ),
        ),
      ),
      \'field_portfolio_terms\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429684077\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'44\',
        \'source\' => \'node/40\',
        \'alias\' => \'content/lorem-ipsum-dolor-sit-amet-3\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'21\',
      \'uid\' => \'1\',
      \'title\' => \'Ordinary Tin Foil Hat\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a17c78ca-8280-4acb-973b-de4426fccd8a\',
      \'nid\' => \'21\',
      \'type\' => \'secondary_slider\',
      \'language\' => \'und\',
      \'created\' => \'1429177288\',
      \'changed\' => \'1429245880\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'67762d7c-80bf-4fcb-838f-3f7daab7f5e0\',
      \'revision_timestamp\' => \'1429245880\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Our first model is the very hat Buddha used to wear to get enlightened. It\'s a perfect solution for those who have just stepped on the path of awakening.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Our first model is the very hat Buddha used to wear to get enlightened. It\'s a perfect solution for those who have just stepped on the path of awakening.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'slide-2.png\',
            \'uri\' => \'public://slide-2.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'196740\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429245880\',
            \'uuid\' => \'cf0bd7d4-255a-4820-80ed-294a1b6fd2a7\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'445\',
            \'height\' => \'461\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/slide-2.png\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429177288\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'25\',
        \'source\' => \'node/21\',
        \'alias\' => \'content/our-templates-are-nice-and-beatiful-they-exactly-fits-your-needs-0\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'28\',
      \'uid\' => \'1\',
      \'title\' => \'Client five\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e14a6001-89b5-4165-8fb4-f0bc3a019077\',
      \'nid\' => \'28\',
      \'type\' => \'clients\',
      \'language\' => \'und\',
      \'created\' => \'1429246764\',
      \'changed\' => \'1429246764\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6b3e9a98-252f-4974-a19d-d91deccc5b75\',
      \'revision_timestamp\' => \'1429246764\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_clients_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'5.png\',
            \'uri\' => \'public://5.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'3884\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429246764\',
            \'uuid\' => \'faceb0a2-e8cc-4582-9aa5-6209c7be78ef\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'138\',
            \'height\' => \'80\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/5.png\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429246764\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'32\',
        \'source\' => \'node/28\',
        \'alias\' => \'content/client-five\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'19\',
      \'uid\' => \'1\',
      \'title\' => \'Tin Foil Hat\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9af5585a-5aa9-4f0d-b652-995a3c3edefa\',
      \'nid\' => \'19\',
      \'type\' => \'main_slider\',
      \'language\' => \'und\',
      \'created\' => \'1429005134\',
      \'changed\' => \'1429773648\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6c590f82-a900-48b4-aa06-572935fff043\',
      \'revision_timestamp\' => \'1429773648\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Shields your brain from:</p>\\r\\n\\r\\n<ul class=\\"check-list\\">\\r\\n\\t<li>Mind control rays</li>\\r\\n\\t<li>Mind reading</li>\\r\\n\\t<li>Electromagnetic fields</li>\\r\\n</ul>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Shields your brain from:</p>\\r\\n\\r\\n<ul class=\\"check-list\\">\\r\\n\\t<li>Mind control rays</li>\\r\\n\\t<li>Mind reading</li>\\r\\n\\t<li>Electromagnetic fields</li>\\r\\n</ul>\\r\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_main_slider_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'screens.png\',
            \'uri\' => \'public://screens.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'139474\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429773648\',
            \'uuid\' => \'59eb1920-c301-4acc-95a0-fa2e70059d0f\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'600\',
            \'height\' => \'406\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/screens.png\',
          ),
        ),
      ),
      \'field_background_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'Layer-4.jpg\',
            \'uri\' => \'public://Layer-4.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'573693\',
            \'status\' => \'1\',
            \'timestamp\' => \'1438158386\',
            \'uuid\' => \'7b49dc4f-a65f-4b4e-8514-f04f1c7994ef\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1800\',
            \'height\' => \'1200\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/Layer-4.jpg\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429005134\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'23\',
        \'source\' => \'node/19\',
        \'alias\' => \'content/beautiful-responsive-theme\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'1\',
      \'title\' => \'Elizabeth Simpson\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4977c416-9cc0-42a9-b625-0e2a32080c4e\',
      \'nid\' => \'6\',
      \'type\' => \'team_member\',
      \'language\' => \'und\',
      \'created\' => \'1428985322\',
      \'changed\' => \'1429246405\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'77d67c3e-4a0f-4184-8ba9-5c92d1176c3b\',
      \'revision_timestamp\' => \'1429246405\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>A double agent that keeps in touch with the key figures of the New World Order.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>A double agent that keeps in touch with the key figures of the New World Order.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_photo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'Layer 1.jpg\',
            \'uri\' => \'public://Layer 1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'8054\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429246405\',
            \'uuid\' => \'d150365f-8045-4b26-8796-7b83b3b2c802\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'180\',
            \'height\' => \'180\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/Layer 1.jpg\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1428985322\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'9\',
        \'source\' => \'node/6\',
        \'alias\' => \'content/jerry-smith-jr-1\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'34\',
      \'uid\' => \'1\',
      \'title\' => \'Lorem ipsum dolor sit amet\',
      \'log\' => \'\',
      \'status\' => \'0\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ba885eca-7c4f-42d7-9fff-e8d633c88644\',
      \'nid\' => \'34\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1429252792\',
      \'changed\' => \'1429252792\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'78a0f897-1367-49ad-afa6-99fa763152be\',
      \'revision_timestamp\' => \'1429252792\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Lorem ipsum dolor sit amet</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_portfolio_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'portfolio3.jpg\',
            \'uri\' => \'public://portfolio3.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'68340\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429252792\',
            \'uuid\' => \'0651f1a3-d90b-47dc-92aa-f1ec5357f405\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'580\',
            \'height\' => \'415\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/portfolio3.jpg\',
          ),
        ),
      ),
      \'field_portfolio_terms\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429252792\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'38\',
        \'source\' => \'node/34\',
        \'alias\' => \'content/lorem-ipsum-dolor-sit-amet-2\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'UFO encounter\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3471bd9c-2f46-4821-8a54-ce4a69662601\',
      \'nid\' => \'11\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1428986881\',
      \'changed\' => \'1429252782\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'7b881d5b-a983-49b0-bc99-7f09d8e0f939\',
      \'revision_timestamp\' => \'1429252782\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>One of the first UFO sightings captured on a photo.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>One of the first UFO sightings captured on a photo.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_portfolio_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'tdy_mor_ufo_150120.jpg\',
            \'uri\' => \'public://tdy_mor_ufo_150120.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'1947869\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429252782\',
            \'uuid\' => \'88911ff8-e4ad-4c94-8aca-0192525610f3\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1920\',
            \'height\' => \'1080\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/tdy_mor_ufo_150120.jpg\',
          ),
        ),
      ),
      \'field_portfolio_terms\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1428986881\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'14\',
        \'source\' => \'node/11\',
        \'alias\' => \'content/lorem-ipsum-dolor-sit-amet-0\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'18\',
      \'uid\' => \'1\',
      \'title\' => \'They Are Among Us\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ee889a81-0d8d-48ba-941c-d0c29d111ffd\',
      \'nid\' => \'18\',
      \'type\' => \'main_slider\',
      \'language\' => \'und\',
      \'created\' => \'1429005116\',
      \'changed\' => \'1429773656\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'7e59b3df-238a-4c7e-b6ca-94e133e8cdd3\',
      \'revision_timestamp\' => \'1429773656\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>You may not know this, but there are shape-shifting extraterrestrial reptilian humanoids among us who dream to recreate ancient&nbsp;style in politics and enslave the human race again! They love to impersonate world leaders and celebrities and control you and your mind!</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>You may not know this, but there are shape-shifting extraterrestrial reptilian humanoids among us who dream to recreate ancient&nbsp;style in politics and enslave the human race again! They love to impersonate world leaders and celebrities and control you and your mind!</p>\\r\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_main_slider_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'girl.png\',
            \'uri\' => \'public://girl.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'181265\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429773656\',
            \'uuid\' => \'660f77d2-93fc-4e27-9f2d-28b12779a72c\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'362\',
            \'height\' => \'485\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/girl.png\',
          ),
        ),
      ),
      \'field_background_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'Layer-14.jpg\',
            \'uri\' => \'public://Layer-14.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'738690\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429771487\',
            \'uuid\' => \'430340c6-d1aa-494c-89f6-5700ae148463\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1402\',
            \'height\' => \'789\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/Layer-14.jpg\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429005116\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'22\',
        \'source\' => \'node/18\',
        \'alias\' => \'content/lorem-ipsum-dolor-sit-amet-consectetur-adipiscing-elit-4\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'47\',
      \'uid\' => \'1\',
      \'title\' => \'Conspiracy theory\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c9654025-a717-4cb1-afd4-13bc71b9e84f\',
      \'nid\' => \'47\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1429687473\',
      \'changed\' => \'1429692235\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'81aacf36-537c-43dd-999d-e7aec08809e8\',
      \'revision_timestamp\' => \'1429692235\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>A thriller film about us. Based on a true story.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>A thriller film about us. Based on a true story.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_portfolio_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'conspiracy_theory_xlg.jpg\',
            \'uri\' => \'public://conspiracy_theory_xlg.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'384343\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429692235\',
            \'uuid\' => \'03462efc-59e5-4982-903b-a9fc1eaee8d2\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1009\',
            \'height\' => \'1500\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/conspiracy_theory_xlg.jpg\',
          ),
        ),
      ),
      \'field_portfolio_terms\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429687473\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'52\',
        \'source\' => \'node/47\',
        \'alias\' => \'content/lorem-ipsum-dolor-sit-amet-10\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'They watch you\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7784559d-d388-42cb-84bd-5404f7ac4073\',
      \'nid\' => \'10\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1428986869\',
      \'changed\' => \'1429252777\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'8b934250-9329-4b65-b695-3ac5282d93e1\',
      \'revision_timestamp\' => \'1429252777\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Big Brother is watching you!</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Big Brother is watching you!</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_portfolio_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'blue_1984_conspiracy_theory_desktop_1920x1080_wallpaper-356955.jpg\',
            \'uri\' => \'public://blue_1984_conspiracy_theory_desktop_1920x1080_wallpaper-356955.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'631996\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429252777\',
            \'uuid\' => \'cacb3c76-9795-4ca4-a71e-71a7c6bb6567\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1920\',
            \'height\' => \'1080\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/blue_1984_conspiracy_theory_desktop_1920x1080_wallpaper-356955.jpg\',
          ),
        ),
      ),
      \'field_portfolio_terms\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1428986869\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'13\',
        \'source\' => \'node/10\',
        \'alias\' => \'content/lorem-ipsum-dolor-sit-amet\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'31\',
      \'uid\' => \'1\',
      \'title\' => \'Client eight\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3e494bd7-9a56-413c-b735-19252b15436b\',
      \'nid\' => \'31\',
      \'type\' => \'clients\',
      \'language\' => \'und\',
      \'created\' => \'1429251720\',
      \'changed\' => \'1429251720\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'965cd9e3-b3ad-4a1c-9a3d-b52d07edd73b\',
      \'revision_timestamp\' => \'1429251720\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_clients_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'2.png\',
            \'uri\' => \'public://2_0.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'3487\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429251720\',
            \'uuid\' => \'6f209ddc-2211-4d75-993d-204c77b24f51\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'108\',
            \'height\' => \'114\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/2_0.png\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429251720\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'35\',
        \'source\' => \'node/31\',
        \'alias\' => \'content/client-eight\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'24\',
      \'uid\' => \'1\',
      \'title\' => "The \'New World Order\'",
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'838ae933-08a0-4584-ba1c-b52f4afaa425\',
      \'nid\' => \'24\',
      \'type\' => \'main_slider\',
      \'language\' => \'und\',
      \'created\' => \'1429245286\',
      \'changed\' => \'1429773665\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'96869598-3712-4ed0-837e-67a62bdadb81\',
      \'revision_timestamp\' => \'1429773665\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>The humankind is&nbsp;dominated&nbsp;by the very rich and powerful people who want to get even richer or die trying. By using occult Secret Societies along with the power of Lucifer&nbsp;the Illuminati&nbsp;will bring all of the nations of this world together as one in order to end this world the way we know it!</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>The humankind is dominated by the very rich and powerful people who want to get even richer or die trying. By using occult Secret Societies along with the power of Lucifer the Illuminati will bring all of the nations of this world together as one in order to end this world the way we know it!</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_main_slider_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'devices.png\',
            \'uri\' => \'public://devices.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'317342\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429773665\',
            \'uuid\' => \'61c885b9-42d4-48d8-8649-da91f8af9173\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1100\',
            \'height\' => \'355\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/devices.png\',
          ),
        ),
      ),
      \'field_background_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'Layer-16.jpg\',
            \'uri\' => \'public://Layer-16.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'306232\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429771475\',
            \'uuid\' => \'99809df4-234d-4229-b700-1b656101b624\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1402\',
            \'height\' => \'934\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/Layer-16.jpg\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429245286\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'28\',
        \'source\' => \'node/24\',
        \'alias\' => \'content/full-responsive\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'17\',
      \'uid\' => \'1\',
      \'title\' => \'Reptiloid abused by zookeeper escapes Sidney terrarium.\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8ed5cc6f-a87e-4bed-9f0d-a2853ad49d7f\',
      \'nid\' => \'17\',
      \'type\' => \'news\',
      \'language\' => \'und\',
      \'created\' => \'1429004469\',
      \'changed\' => \'1429687882\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9bf14ceb-77ca-4a0a-b31c-2aef45f9fc5d\',
      \'revision_timestamp\' => \'1429687882\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Sydney, July 29 ­– An unemployed alien reptiloid that resided in Sydney terrarium for 5 years claims to be physically abused by elderly zookeeper. According to the alien, the&nbsp;creature that appeared&nbsp;in the zoo is a clear example of “speciesism”, a discrimination based on the species attribute. While the police tries&nbsp;to keep the case down, the outraged reptiloid threatens to sue the hell out of the city. One of the world’s richiest lawyers John Branca&nbsp;will represent the reptilod in the court, free of any charge. Coincidence, ha?</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Sydney, July 29 ­– An unemployed alien reptiloid that resided in Sydney terrarium for 5 years claims to be physically abused by elderly zookeeper. According to the alien, the creature that appeared in the zoo is a clear example of “speciesism”, a discrimination based on the species attribute. While the police tries to keep the case down, the outraged reptiloid threatens to sue the hell out of the city. One of the world’s richiest lawyers John Branca will represent the reptilod in the court, free of any charge. Coincidence, ha?</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_news_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'img.jpg\',
            \'uri\' => \'public://img.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'40579\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429245976\',
            \'uuid\' => \'61c8e9f1-23cf-48f9-ad79-1f487c5485f0\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'580\',
            \'height\' => \'400\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/img.jpg\',
          ),
        ),
      ),
      \'field_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'7\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429004469\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'disqus\' => array(
        \'domain\' => \'themecorporatev2\',
        \'status\' => TRUE,
        \'url\' => \'http://127.0.0.1:2525/content/lorem-ipsum-dolor-sit-amet-consectetur-adipiscing-elit-3\',
        \'title\' => \'Lorem Ipsum Dolore Sit Amet Consectetur Elit Tempor  Incididunt ut Labore et Dolore\',
        \'identifier\' => \'node/17\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'21\',
        \'source\' => \'node/17\',
        \'alias\' => \'content/lorem-ipsum-dolor-sit-amet-consectetur-adipiscing-elit-3\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'41\',
      \'uid\' => \'1\',
      \'title\' => \'Our client\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'313c515a-4f75-449d-80fd-b9071c6287e4\',
      \'nid\' => \'41\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1429685893\',
      \'changed\' => \'1429692280\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a9776e33-74dc-4528-9459-ef7a9d1459d9\',
      \'revision_timestamp\' => \'1429692280\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Our happy client feels safe and protected in his new tin foil hat.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Our happy client feels safe and protected in his new tin foil hat.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_portfolio_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'a-startling-number-of-americans-believe-in-at-least-one-conspiracy-theory.jpg\',
            \'uri\' => \'public://a-startling-number-of-americans-believe-in-at-least-one-conspiracy-theory.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'189065\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429692280\',
            \'uuid\' => \'cf241a68-7ad1-4d26-9a8a-6db1ac655bc9\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'2000\',
            \'height\' => \'1000\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/a-startling-number-of-americans-believe-in-at-least-one-conspiracy-theory.jpg\',
          ),
        ),
      ),
      \'field_portfolio_terms\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429685893\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'45\',
        \'source\' => \'node/41\',
        \'alias\' => \'content/lorem-ipsum-dolor-sit-amet-4\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'29\',
      \'uid\' => \'1\',
      \'title\' => \'Client six\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5b89b6e0-817e-4a0d-936c-42ac597cf3ef\',
      \'nid\' => \'29\',
      \'type\' => \'clients\',
      \'language\' => \'und\',
      \'created\' => \'1429246775\',
      \'changed\' => \'1429246775\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'af5a5963-eb1b-44be-8692-3ff2e2cf7b10\',
      \'revision_timestamp\' => \'1429246775\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_clients_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'6.png\',
            \'uri\' => \'public://6.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'6691\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429246775\',
            \'uuid\' => \'5e1cd63c-a3ef-4583-a7ac-4b388394a36e\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'120\',
            \'height\' => \'109\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/6.png\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429246775\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'33\',
        \'source\' => \'node/29\',
        \'alias\' => \'content/client-six\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'14\',
      \'uid\' => \'1\',
      \'title\' => \'Client Two\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'12309124-434e-4f02-87f2-f9eedfebc990\',
      \'nid\' => \'14\',
      \'type\' => \'clients\',
      \'language\' => \'und\',
      \'created\' => \'1428997651\',
      \'changed\' => \'1429246727\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ba68d73b-84f8-4cae-b759-3306e00cb002\',
      \'revision_timestamp\' => \'1429246727\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_clients_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'2.png\',
            \'uri\' => \'public://2.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'3487\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429246727\',
            \'uuid\' => \'526c26a0-367c-44d4-b856-e2063665b012\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'108\',
            \'height\' => \'114\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/2.png\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1428997651\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'18\',
        \'source\' => \'node/14\',
        \'alias\' => \'content/client-two\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'43\',
      \'uid\' => \'1\',
      \'title\' => \'Lorem ipsum dolor sit amet\',
      \'log\' => \'\',
      \'status\' => \'0\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7283ae79-ce42-4197-bfca-3b4b574a2b14\',
      \'nid\' => \'43\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1429685977\',
      \'changed\' => \'1429692266\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c09c1c64-9a49-4bd2-ab79-af7966d2bbf1\',
      \'revision_timestamp\' => \'1429692266\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_portfolio_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'07.jpg\',
            \'uri\' => \'public://07_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'285906\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429692266\',
            \'uuid\' => \'1aa541b5-5c11-45df-9dbd-8f815a64b87e\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1376\',
            \'height\' => \'546\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/07_0.jpg\',
          ),
        ),
      ),
      \'field_portfolio_terms\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429685977\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'48\',
        \'source\' => \'node/43\',
        \'alias\' => \'content/lorem-ipsum-dolor-sit-amet-6\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'45\',
      \'uid\' => \'1\',
      \'title\' => \'Lorem ipsum dolor sit amet\',
      \'log\' => \'\',
      \'status\' => \'0\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'29418ffb-5e4d-4966-9409-e182f6d774c5\',
      \'nid\' => \'45\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1429686033\',
      \'changed\' => \'1429692252\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c5e2e8b2-7034-46f5-be8f-6f80fd6ad607\',
      \'revision_timestamp\' => \'1429692252\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_portfolio_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'05.jpg\',
            \'uri\' => \'public://05_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'228090\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429692252\',
            \'uuid\' => \'06e2c595-6082-4e69-b799-834143965e49\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'951\',
            \'height\' => \'634\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/05_0.jpg\',
          ),
        ),
      ),
      \'field_portfolio_terms\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429686033\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'50\',
        \'source\' => \'node/45\',
        \'alias\' => \'content/lorem-ipsum-dolor-sit-amet-8\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'23\',
      \'uid\' => \'1\',
      \'title\' => \'Comfortable\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'092e4359-bee6-46f6-93fd-798e4f4bf7a0\',
      \'nid\' => \'23\',
      \'type\' => \'dignities\',
      \'language\' => \'und\',
      \'created\' => \'1429177458\',
      \'changed\' => \'1429245520\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c731b564-44ca-464d-b8b9-78fc88c37921\',
      \'revision_timestamp\' => \'1429245520\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Perfectly follows the shape of your head.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Perfectly follows the shape of your head.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'11.png\',
            \'uri\' => \'public://11.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'503\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429245520\',
            \'uuid\' => \'f901ca35-ee17-4439-ab3a-12ad8bc6ce17\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'58\',
            \'height\' => \'71\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/11.png\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429177458\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'27\',
        \'source\' => \'node/23\',
        \'alias\' => \'content/fully-responsive-design-0\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'9\',
      \'uid\' => \'1\',
      \'title\' => \'Points For The Flat Earth Model\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8d692bd1-c309-4744-ae11-eb11dd7f8133\',
      \'nid\' => \'9\',
      \'type\' => \'blog_entry\',
      \'language\' => \'und\',
      \'created\' => \'1428986028\',
      \'changed\' => \'1429687792\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c7c7de90-8dff-4888-b0f4-a561bd0c142f\',
      \'revision_timestamp\' => \'1429687792\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>– Lack of visible or measurable curvature: The horizon looks flat to the eye. Researchers have claimed that the skyline of cities such as New York City and Philadelphia are visible 40-60 miles away from the ground, when the alleged curvature of the Earth should not permit them to be seen. The famous Bedford Canal experiment performed in 1838 by Samuel Rowbotham showed that a canoe or small boat was visible from 6 miles away along a river (when the curvature of the earth should have rendered it invisible below the horizon or line of sight). Is this light refraction or evidence of a flat earth?&nbsp;</p>\\r\\n\\r\\n<p>– Lack of discernible spin: When an airborne plane is trying to land, if the earth were really spinning, it should be difficult for the plane to land. It would be landing on a moving target. Yet no planes appear to have trouble doing this or use a spinning earth in their calculations. Why not?&nbsp;</p>\\r\\n\\r\\n<p>– Admiral Byrd’s Antarctic expedition: Admiral Richard E. Byrd was a courageous explorer who earnt the trust of the US Government. They sent him down to Antarctica on a military mission in 1947. He reported that in Antarctica he ran into UFOs – “vehicles which could travel from one pole to the other in less than an hour” as he wrote in his diary – and found his way into the center of the earth, “inner earth”, where the temperature was warm, vegetation grew and a Nordic race of people lived. Remember, this was a hardened, rational military man writing such things. In this video interview, he also reveals that beyond the South Pole there was still much of Antarctica left unexplored (an area the size of the USA in fact). After this Governments of the world joined forces and made Antarctica off limits and all trips there highly regulated. Why?&nbsp;</p>\\r\\n\\r\\n<p>– The problem of the Sun’s heat: If the sun is really 93 million miles away, how does its heat travel through space (an apparent vacuum) to reach us? Can space conduct or transfer heat? If not, can the atmosphere of Earth take the sun’s light and transform it into heat? If so, how does that work? Has it been proven beyond all doubt?&nbsp;</p>\\r\\n\\r\\n<p>– The problem of the Sun’s light: Sometimes you can see the sun’s rays coming in at wide angles. How could this be if they were all coming from 93 million miles away? From that distance they are essentially parallel. Does the atmosphere disperse them? If so, how? Has this been proven beyond all doubt?&nbsp;</p>\\r\\n\\r\\n<p>– Strangeness around Southern Hemisphere flights: Why are there so few direct flights in the Southern Hemisphere? Why do planes flying from places like Sydney (Australia) to Johannesburg (South Africa) routinely go via places like Dubai in the Middle East, which is completely off course and out of the way? The direct flight would be around 12 hours and planes have enough fuel to do this without needing to stop. Why are planes’ GPS turned off during Southern Hemisphere flights, so that their exact trajectories can not be easily tracked?</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>– Lack of visible or measurable curvature: The horizon looks flat to the eye. Researchers have claimed that the skyline of cities such as New York City and Philadelphia are visible 40-60 miles away from the ground, when the alleged curvature of the Earth should not permit them to be seen. The famous Bedford Canal experiment performed in 1838 by Samuel Rowbotham showed that a canoe or small boat was visible from 6 miles away along a river (when the curvature of the earth should have rendered it invisible below the horizon or line of sight). Is this light refraction or evidence of a flat earth? </p>\\n<p>– Lack of discernible spin: When an airborne plane is trying to land, if the earth were really spinning, it should be difficult for the plane to land. It would be landing on a moving target. Yet no planes appear to have trouble doing this or use a spinning earth in their calculations. Why not? </p>\\n<p>– Admiral Byrd’s Antarctic expedition: Admiral Richard E. Byrd was a courageous explorer who earnt the trust of the US Government. They sent him down to Antarctica on a military mission in 1947. He reported that in Antarctica he ran into UFOs – “vehicles which could travel from one pole to the other in less than an hour” as he wrote in his diary – and found his way into the center of the earth, “inner earth”, where the temperature was warm, vegetation grew and a Nordic race of people lived. Remember, this was a hardened, rational military man writing such things. In this video interview, he also reveals that beyond the South Pole there was still much of Antarctica left unexplored (an area the size of the USA in fact). After this Governments of the world joined forces and made Antarctica off limits and all trips there highly regulated. Why? </p>\\n<p>– The problem of the Sun’s heat: If the sun is really 93 million miles away, how does its heat travel through space (an apparent vacuum) to reach us? Can space conduct or transfer heat? If not, can the atmosphere of Earth take the sun’s light and transform it into heat? If so, how does that work? Has it been proven beyond all doubt? </p>\\n<p>– The problem of the Sun’s light: Sometimes you can see the sun’s rays coming in at wide angles. How could this be if they were all coming from 93 million miles away? From that distance they are essentially parallel. Does the atmosphere disperse them? If so, how? Has this been proven beyond all doubt? </p>\\n<p>– Strangeness around Southern Hemisphere flights: Why are there so few direct flights in the Southern Hemisphere? Why do planes flying from places like Sydney (Australia) to Johannesburg (South Africa) routinely go via places like Dubai in the Middle East, which is completely off course and out of the way? The direct flight would be around 12 hours and planes have enough fuel to do this without needing to stop. Why are planes’ GPS turned off during Southern Hemisphere flights, so that their exact trajectories can not be easily tracked?</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_blog_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'o-FLAT-EARTH-facebook.jpg\',
            \'uri\' => \'public://o-FLAT-EARTH-facebook.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'150466\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429254198\',
            \'uuid\' => \'c2bb9459-0b1f-457e-9d48-c53d35e5275d\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1536\',
            \'height\' => \'1536\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/o-FLAT-EARTH-facebook.jpg\',
          ),
        ),
      ),
      \'field_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'4\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1428986028\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'disqus\' => array(
        \'domain\' => \'themecorporatev2\',
        \'status\' => TRUE,
        \'url\' => \'http://127.0.0.1:2525/blog/lorem-ipsum-dolor-sit-amet-consectetur-adipiscing-elit\',
        \'title\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. \',
        \'identifier\' => \'node/9\',
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'12\',
        \'source\' => \'node/9\',
        \'alias\' => \'blog/lorem-ipsum-dolor-sit-amet-consectetur-adipiscing-elit\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => \'Lorem ipsum dolor sit amet\',
      \'log\' => \'\',
      \'status\' => \'0\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1f29588f-ab1e-4665-966d-2ba04850d2fd\',
      \'nid\' => \'12\',
      \'type\' => \'portfolio\',
      \'language\' => \'und\',
      \'created\' => \'1428993700\',
      \'changed\' => \'1429252766\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'eb788c12-d7d2-4608-b51a-26c0610561b7\',
      \'revision_timestamp\' => \'1429252766\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Lorem ipsum dolor sit amet</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_portfolio_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'portfolio.jpg\',
            \'uri\' => \'public://portfolio.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'19594\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429252766\',
            \'uuid\' => \'878c75dc-b3de-4083-a4e0-de2254b7d603\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'580\',
            \'height\' => \'415\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/portfolio.jpg\',
          ),
        ),
      ),
      \'field_portfolio_terms\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1428993700\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'16\',
        \'source\' => \'node/12\',
        \'alias\' => \'content/lorem-ipsum-dolor-sit-amet-1\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'13\',
      \'uid\' => \'1\',
      \'title\' => \'Client One\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f1bf66a1-a515-4ef3-bd92-8165ca449750\',
      \'nid\' => \'13\',
      \'type\' => \'clients\',
      \'language\' => \'und\',
      \'created\' => \'1428997613\',
      \'changed\' => \'1429246603\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ee4e05e7-f171-4366-892c-03d4526e5908\',
      \'revision_timestamp\' => \'1429246603\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_clients_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'1.png\',
            \'uri\' => \'public://1.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'3484\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429246603\',
            \'uuid\' => \'116a0846-82fe-48b6-80c8-74ffdb57d8ea\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'138\',
            \'height\' => \'90\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/1.png\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1428997613\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'17\',
        \'source\' => \'node/13\',
        \'alias\' => \'content/client-one\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'32\',
      \'uid\' => \'1\',
      \'title\' => \'Donatella Versace\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'296bf3b7-7ff3-47d9-a44d-1015d4838230\',
      \'nid\' => \'32\',
      \'type\' => \'team_member\',
      \'language\' => \'und\',
      \'created\' => \'1429252319\',
      \'changed\' => \'1429252351\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f8687a15-65bd-49f7-89b4-5ac12396bac3\',
      \'revision_timestamp\' => \'1429252351\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>The woman responsible for the high tech equipment of the agency; the inventor and fashion designer of the world famous tin foil hats.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The woman responsible for the high tech equipment of the agency; the inventor and fashion designer of the world famous tin foil hats.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_photo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'Layer 19.png\',
            \'uri\' => \'public://Layer 19.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'63870\',
            \'status\' => \'1\',
            \'timestamp\' => \'1429252351\',
            \'uuid\' => \'3a07cbd5-c069-49ee-9e8d-b220150cd461\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'180\',
            \'height\' => \'180\',
            \'node_export_file_path\' => \'profiles/multipurpose_corporate_profile/node_export_assets/Layer 19.png\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1429252319\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'36\',
        \'source\' => \'node/32\',
        \'alias\' => \'content/jerry-smith-jr-2\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
