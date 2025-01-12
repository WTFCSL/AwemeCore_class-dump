//
//     Generated by private class-dump
//

@class BDPThreadSafeArray, NSString;

@interface BDPVideoFormatSupportService : NSObject <BDPVideoFormatSupportService> {
    BOOL _canUseH265;
    long long _state;
    BDPThreadSafeArray *_supportCompletions;
}

@property (nonatomic) long long state;
@property (nonatomic) BOOL canUseH265;
@property (retain, nonatomic) BDPThreadSafeArray *supportCompletions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)supportH265Format:(id /* block */)arg0 uniqueID:(id)arg1;
- (void)_requestH265FormatSupport:(id)arg0;
- (void)_h265responseHandle:(BOOL)arg0 canUse:(BOOL)arg1 errMsg:(id)arg2;
- (void)setCanUseH265:(BOOL)arg0;
- (BOOL)canUseH265;
- (id)supportCompletions;
- (void)setSupportCompletions:(id)arg0;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (void)dealloc;

@end
