//
//     Generated by private class-dump
//

@class NSString;

@interface ACCCutSameDVEEffectManager : NSObject <DVEffectDownloadDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestForBinaryWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 enableHttpCache:(BOOL)arg5 progress:(id *)arg6 callback:(id /* block */)arg7;

@end