//
//     Generated by private class-dump
//

@class NSString;

@interface APSignManager : NSObject <APSignProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)preColorInfo:(int)arg0 ext:(id)arg1 error:(id *)arg2;
- (int)initColorInfo:(int)arg0;
- (id)getColorInfo:(int)arg0 biz:(id)arg1 param:(id)arg2 ext:(id)arg3 error:(id *)arg4;
- (void)updateColorCode:(id)arg0 code:(id)arg1;
- (id)init;
- (int)getMode:(id)arg0;

@end
