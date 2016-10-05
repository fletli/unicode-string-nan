{
  "targets": [
    {
      "target_name": "unicode-string-nan",
      "sources": [ "unicode-string-nan.cpp" ],
      "include_dirs" : [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ]
}
