//
//     Generated by private class-dump
//

@class NSString;

@interface PTYUnZip : NSObject <PTYUnZipProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 withError:(id *)arg2;
+ (void)setup:(id)arg0;

@end