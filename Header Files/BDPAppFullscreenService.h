//
//     Generated by private class-dump
//

@class NSString;

@interface BDPAppFullscreenService : NSObject <BDPAppFullscreenService> {
    BOOL _isFullscreen;
    id _fullscreenElement;
}

@property (nonatomic) BOOL isFullscreen;
@property (weak, nonatomic) id fullscreenElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (BOOL)canEnterFullscreenWithPageID:(long long)arg0 element:(id)arg1 orientation:(long long)arg2 uniqueID:(id)arg3;
- (BOOL)canExitFullscreenWithPageID:(long long)arg0 element:(id)arg1 uniqueID:(id)arg2;
- (BOOL)tryExitFullscreenWithPageID:(long long)arg0 element:(id)arg1 uniqueID:(id)arg2;
- (id)fullscreenElement;
- (void)setFullscreenElement:(id)arg0;
- (id)initService;
- (BOOL)tryEnterFullscreenWithPageID:(long long)arg0 element:(id)arg1 orientation:(long long)arg2 uniqueID:(id)arg3;
- (void).cxx_destruct;
- (BOOL)isFullscreen;
- (void)setIsFullscreen:(BOOL)arg0;

@end
