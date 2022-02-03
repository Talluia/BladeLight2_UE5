$a = Get-Content ../MyProjectBuildScript.uproject -Encoding UTF8 | ConvertFrom-Json
$a

$a.EngineAssociation = $Args[0]

$a | ConvertTo-Json > ../MyProjectBuildScript.uproject

