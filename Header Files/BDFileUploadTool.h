//
//     Generated by private class-dump
//

@interface BDFileUploadTool : NSObject

+ (id)contextDirPath;
+ (id)jsonSerialization:(id)arg0;
+ (id)retryStatesDirPath;
+ (id)jsonDeserialization:(id)arg0;
+ (id)signatureAwsHeaders:(id)arg0 queryMapArrary:(id)arg1 accessKey:(id)arg2 secretKey:(id)arg3 serviceName:(id)arg4 httpMethod:(long long)arg5 regionName:(id)arg6 content:(id)arg7;
+ (id)signatureAwsHeaders:(id)arg0 queryMap:(id)arg1 accessKey:(id)arg2 secretKey:(id)arg3 serviceName:(id)arg4 httpMethod:(long long)arg5 regionName:(id)arg6 content:(id)arg7;
+ (id)createDirPath:(id)arg0;
+ (id)signatureAwsHeaders:(id)arg0 queryMap:(id)arg1 accessKey:(id)arg2 secretKey:(id)arg3 serviceName:(id)arg4 httpMethod:(long long)arg5 regionName:(id)arg6;
+ (id)uuidString;
+ (id)cacheDirPath;
+ (id)getLogFilePath;

@end