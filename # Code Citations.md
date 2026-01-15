# Code Citations

## License: unknown
https://github.com/shaszard/test/blob/7d1dd2a32f95eacaaea7d808cd07faf99e425977/logic/java/JavaUtils.cpp

```
> java_candidates;

        // Oracle
        QList<JavaInstallPtr> JRE64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\JavaSoft\\Java Runtime Environment", "JavaHome");
        QList<JavaInstallPtr> JDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\JavaSoft\\Java Development Kit", "JavaHome");
        QList<JavaInstallPtr> JRE32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\JavaSoft\\Java Runtime Environment", "JavaHome");
        QList<JavaInstallPtr> JDK32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\JavaSoft\\Java Development Kit", "JavaHome");

        // Oracle for Java 9 and newer
        QList<JavaInstallPtr> NEWJRE64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\JavaSoft\\JRE", "JavaHome");
        QList<JavaInstallPtr> NEWJDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\JavaSoft\\JDK", "JavaHome");
        QList<JavaInstallPtr> NEWJRE32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\JavaSoft\\JRE", "JavaHome");
        QList<JavaInstallPtr> NEWJDK32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\JavaSoft\\JDK", "JavaHome");

        // AdoptOpenJDK
        QList<JavaInstallPtr> ADOPTOPENJRE32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\AdoptOpenJDK\\JRE", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTOPENJRE64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\AdoptOpenJDK\\JRE", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTOPENJDK32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\AdoptOpenJDK\\JDK", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTOPENJDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\AdoptOpenJDK\\JDK", "Path", "\\hotspot\\MSI");

        // Eclipse Foundation
        QList<JavaInstallPtr> FOUNDATIONJDK32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\Eclipse Foundation\\JDK", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> FOUNDATIONJDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\Eclipse Foundation\\JDK", "Path", "\\hotspot\\MSI");

        // Eclipse Adoptium
        QList<JavaInstallPtr> ADOPTIUMJRE32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\Eclipse Adoptium\\JRE", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTIUMJRE64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\Eclipse Adoptium\\JRE", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTIUMJDK32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\Eclipse Adoptium\\JDK", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTIUMJDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\Eclipse Adoptium\\JDK", "Path", "\\hotspot\\MSI");

        // Microsoft
        QList<JavaInstallPtr> MICROSOFTJDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\Microsoft\\JDK", "Path", "\\hotspot\\MSI");

        // Azul Zulu
        QList<JavaInstallPtr> ZULU64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\Azul Systems\\Zulu", "InstallationPath");
        QList<JavaInstallPtr> ZULU32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\Azul Systems\\Zulu", "InstallationPath");
        
        // BellSoft Liberica
        QList<JavaInstallPtr> LIBERICA64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\BellSoft\\Liberica", "InstallationPath");
        QList<JavaInstallPtr> LIBERICA32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\BellSoft\\Liberica", "InstallationPath");

        // List x64 before x86
        java_candidates.append(JRE64s);
        java_candidates.append(NEWJRE64s);
        java_candidates.append(ADOPTOPENJRE64s);
        java_candidates.append(ADOPTIUMJRE64s);
        java_candidates.append(MakeJavaPtr("C:/Program Files/Java/jre8/bin/javaw.exe"));
        java_candidates.append(MakeJavaPtr("C:/Program Files/Java/jre7/bin/javaw.exe"));
        java_candidates.append(MakeJavaPtr("C:/Program Files/Java/jre6/bin/javaw.exe"));
        java_candidates.append(JDK64s);
        java_candidates.append(NEWJDK64s);
        java_candidates.append(ADOPTOPENJDK64s);
        java_candidates.append(FOUNDATIONJDK64s);
        java_candidates.append(ADOPTIUMJDK64s);
        java_candidates.append(MICROSOFTJDK64s);
        java_candidates.append(ZULU64s);
        java_candidates.append(LIBERICA64s);

        java_candidates.append(JRE32s);
        java_candidates.append(NEWJRE32s);
        java_candidates.append(ADOPTOPENJRE32s);
        java_candidates.append(ADOPTIUMJRE32s);
        java_candidates.append(MakeJavaPtr("C:/Program Files (x86)/Java/jre8/bin/javaw.exe"));
        java_candidates.append(MakeJavaPtr("C:/Program Files (x86)/Java/jre7/bin/javaw.exe"));
        java_candidates.append(MakeJavaPtr("C:/Program Files (x86)/Java/jre6/bin/javaw.exe"));
        java_candidates.append(JDK32s);
        java_candidates.append(NEWJDK32s);
        java_candidates.append(ADOPTOPENJDK32s);
        java_candidates.append(FOUNDATIONJDK32s);
        java_candidates.append(ADOPTIUMJDK32s);
        java_candidates.append(ZULU32s);
        java_candidates.append(LIBERICA32s);
        
        java_candidates.append(MakeJavaPtr(this->GetDefaultJava()->path));

        QList<QString> candidates;
        for(JavaInstallPtr java_candidate : java_candidates)
        {
            if(!candidates.contains(java_candidate->path))
            {
                candidates.append(java_candidate->path);
            }
        }
```


## License: unknown
https://github.com/Jorch72/CPP-MultiMC5/blob/a279df8bdaee22ca04073a193294fd0e6dd2a313/api/logic/java/JavaUtils.cpp

```
> java_candidates;

        // Oracle
        QList<JavaInstallPtr> JRE64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\JavaSoft\\Java Runtime Environment", "JavaHome");
        QList<JavaInstallPtr> JDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\JavaSoft\\Java Development Kit", "JavaHome");
        QList<JavaInstallPtr> JRE32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\JavaSoft\\Java Runtime Environment", "JavaHome");
        QList<JavaInstallPtr> JDK32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\JavaSoft\\Java Development Kit", "JavaHome");

        // Oracle for Java 9 and newer
        QList<JavaInstallPtr> NEWJRE64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\JavaSoft\\JRE", "JavaHome");
        QList<JavaInstallPtr> NEWJDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\JavaSoft\\JDK", "JavaHome");
        QList<JavaInstallPtr> NEWJRE32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\JavaSoft\\JRE", "JavaHome");
        QList<JavaInstallPtr> NEWJDK32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\JavaSoft\\JDK", "JavaHome");

        // AdoptOpenJDK
        QList<JavaInstallPtr> ADOPTOPENJRE32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\AdoptOpenJDK\\JRE", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTOPENJRE64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\AdoptOpenJDK\\JRE", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTOPENJDK32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\AdoptOpenJDK\\JDK", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTOPENJDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\AdoptOpenJDK\\JDK", "Path", "\\hotspot\\MSI");

        // Eclipse Foundation
        QList<JavaInstallPtr> FOUNDATIONJDK32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\Eclipse Foundation\\JDK", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> FOUNDATIONJDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\Eclipse Foundation\\JDK", "Path", "\\hotspot\\MSI");

        // Eclipse Adoptium
        QList<JavaInstallPtr> ADOPTIUMJRE32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\Eclipse Adoptium\\JRE", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTIUMJRE64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\Eclipse Adoptium\\JRE", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTIUMJDK32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\Eclipse Adoptium\\JDK", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTIUMJDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\Eclipse Adoptium\\JDK", "Path", "\\hotspot\\MSI");

        // Microsoft
        QList<JavaInstallPtr> MICROSOFTJDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\Microsoft\\JDK", "Path", "\\hotspot\\MSI");

        // Azul Zulu
        QList<JavaInstallPtr> ZULU64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\Azul Systems\\Zulu", "InstallationPath");
        QList<JavaInstallPtr> ZULU32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\Azul Systems\\Zulu", "InstallationPath");
        
        // BellSoft Liberica
        QList<JavaInstallPtr> LIBERICA64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\BellSoft\\Liberica", "InstallationPath");
        QList<JavaInstallPtr> LIBERICA32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\BellSoft\\Liberica", "InstallationPath");

        // List x64 before x86
        java_candidates.append(JRE64s);
        java_candidates.append(NEWJRE64s);
        java_candidates.append(ADOPTOPENJRE64s);
        java_candidates.append(ADOPTIUMJRE64s);
        java_candidates.append(MakeJavaPtr("C:/Program Files/Java/jre8/bin/javaw.exe"));
        java_candidates.append(MakeJavaPtr("C:/Program Files/Java/jre7/bin/javaw.exe"));
        java_candidates.append(MakeJavaPtr("C:/Program Files/Java/jre6/bin/javaw.exe"));
        java_candidates.append(JDK64s);
        java_candidates.append(NEWJDK64s);
        java_candidates.append(ADOPTOPENJDK64s);
        java_candidates.append(FOUNDATIONJDK64s);
        java_candidates.append(ADOPTIUMJDK64s);
        java_candidates.append(MICROSOFTJDK64s);
        java_candidates.append(ZULU64s);
        java_candidates.append(LIBERICA64s);

        java_candidates.append(JRE32s);
        java_candidates.append(NEWJRE32s);
        java_candidates.append(ADOPTOPENJRE32s);
        java_candidates.append(ADOPTIUMJRE32s);
        java_candidates.append(MakeJavaPtr("C:/Program Files (x86)/Java/jre8/bin/javaw.exe"));
        java_candidates.append(MakeJavaPtr("C:/Program Files (x86)/Java/jre7/bin/javaw.exe"));
        java_candidates.append(MakeJavaPtr("C:/Program Files (x86)/Java/jre6/bin/javaw.exe"));
        java_candidates.append(JDK32s);
        java_candidates.append(NEWJDK32s);
        java_candidates.append(ADOPTOPENJDK32s);
        java_candidates.append(FOUNDATIONJDK32s);
        java_candidates.append(ADOPTIUMJDK32s);
        java_candidates.append(ZULU32s);
        java_candidates.append(LIBERICA32s);
        
        java_candidates.append(MakeJavaPtr(this->GetDefaultJava()->path));

        QList<QString> candidates;
        for(JavaInstallPtr java_candidate : java_candidates)
        {
            if(!candidates.contains(java_candidate->path))
            {
                candidates.append(java_candidate->path);
            }
        }
```


## License: unknown
https://github.com/MinecraftMachina/ManyMC/blob/96802f3bea7edf77f90164e4a55f2088b10b4d8b/launcher/java/JavaUtils.cpp

```
> java_candidates;

        // Oracle
        QList<JavaInstallPtr> JRE64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\JavaSoft\\Java Runtime Environment", "JavaHome");
        QList<JavaInstallPtr> JDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\JavaSoft\\Java Development Kit", "JavaHome");
        QList<JavaInstallPtr> JRE32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\JavaSoft\\Java Runtime Environment", "JavaHome");
        QList<JavaInstallPtr> JDK32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\JavaSoft\\Java Development Kit", "JavaHome");

        // Oracle for Java 9 and newer
        QList<JavaInstallPtr> NEWJRE64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\JavaSoft\\JRE", "JavaHome");
        QList<JavaInstallPtr> NEWJDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\JavaSoft\\JDK", "JavaHome");
        QList<JavaInstallPtr> NEWJRE32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\JavaSoft\\JRE", "JavaHome");
        QList<JavaInstallPtr> NEWJDK32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\JavaSoft\\JDK", "JavaHome");

        // AdoptOpenJDK
        QList<JavaInstallPtr> ADOPTOPENJRE32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\AdoptOpenJDK\\JRE", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTOPENJRE64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\AdoptOpenJDK\\JRE", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTOPENJDK32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\AdoptOpenJDK\\JDK", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTOPENJDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\AdoptOpenJDK\\JDK", "Path", "\\hotspot\\MSI");

        // Eclipse Foundation
        QList<JavaInstallPtr> FOUNDATIONJDK32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\Eclipse Foundation\\JDK", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> FOUNDATIONJDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\Eclipse Foundation\\JDK", "Path", "\\hotspot\\MSI");

        // Eclipse Adoptium
        QList<JavaInstallPtr> ADOPTIUMJRE32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\Eclipse Adoptium\\JRE", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTIUMJRE64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\Eclipse Adoptium\\JRE", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTIUMJDK32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\Eclipse Adoptium\\JDK", "Path", "\\hotspot\\MSI");
        QList<JavaInstallPtr> ADOPTIUMJDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\Eclipse Adoptium\\JDK", "Path", "\\hotspot\\MSI");

        // Microsoft
        QList<JavaInstallPtr> MICROSOFTJDK64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\Microsoft\\JDK", "Path", "\\hotspot\\MSI");

        // Azul Zulu
        QList<JavaInstallPtr> ZULU64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\Azul Systems\\Zulu", "InstallationPath");
        QList<JavaInstallPtr> ZULU32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\Azul Systems\\Zulu", "InstallationPath");
        
        // BellSoft Liberica
        QList<JavaInstallPtr> LIBERICA64s = this->FindJavaFromRegistryKey(
            KEY_WOW64_64KEY, "SOFTWARE\\BellSoft\\Liberica", "InstallationPath");
        QList<JavaInstallPtr> LIBERICA32s = this->FindJavaFromRegistryKey(
            KEY_WOW64_32KEY, "SOFTWARE\\BellSoft\\Liberica", "InstallationPath");

        // List x64 before x86
        java_candidates.append(JRE64s);
        java_candidates.append(NEWJRE64s);
        java_candidates.append(ADOPTOPENJRE64s);
        java_candidates.append(ADOPTIUMJRE64s);
        java_candidates.append(MakeJavaPtr("C:/Program Files/Java/jre8/bin/javaw.exe"));
        java_candidates.append(MakeJavaPtr("C:/Program Files/Java/jre7/bin/javaw.exe"));
        java_candidates.append(MakeJavaPtr("C:/Program Files/Java/jre6/bin/javaw.exe"));
        java_candidates.append(JDK64s);
        java_candidates.append(NEWJDK64s);
        java_candidates.append(ADOPTOPENJDK64s);
        java_candidates.append(FOUNDATIONJDK64s);
        java_candidates.append(ADOPTIUMJDK64s);
        java_candidates.append(MICROSOFTJDK64s);
        java_candidates.append(ZULU64s);
        java_candidates.append(LIBERICA64s);

        java_candidates.append(JRE32s);
        java_candidates.append(NEWJRE32s);
        java_candidates.append(ADOPTOPENJRE32s);
        java_candidates.append(ADOPTIUMJRE32s);
        java_candidates.append(MakeJavaPtr("C:/Program Files (x86)/Java/jre8/bin/javaw.exe"));
        java_candidates.append(MakeJavaPtr("C:/Program Files (x86)/Java/jre7/bin/javaw.exe"));
        java_candidates.append(MakeJavaPtr("C:/Program Files (x86)/Java/jre6/bin/javaw.exe"));
        java_candidates.append(JDK32s);
        java_candidates.append(NEWJDK32s);
        java_candidates.append(ADOPTOPENJDK32s);
        java_candidates.append(FOUNDATIONJDK32s);
        java_candidates.append(ADOPTIUMJDK32s);
        java_candidates.append(ZULU32s);
        java_candidates.append(LIBERICA32s);
        
        java_candidates.append(MakeJavaPtr(this->GetDefaultJava()->path));

        QList<QString> candidates;
        for(JavaInstallPtr java_candidate : java_candidates)
        {
            if(!candidates.contains(java_candidate->path))
            {
                candidates.append(java_candidate->path);
            }
        }
```

