//
//     Generated by private class-dump
//

@protocol BDPAppFullscreenService <BDPService>

- (BOOL)canEnterFullscreenWithPageID:(long long)arg0 element:(id)arg1 orientation:(long long)arg2 uniqueID:(id)arg3;
- (BOOL)canExitFullscreenWithPageID:(long long)arg0 element:(id)arg1 uniqueID:(id)arg2;
- (BOOL)tryExitFullscreenWithPageID:(long long)arg0 element:(id)arg1 uniqueID:(id)arg2;
- (BOOL)tryEnterFullscreenWithPageID:(long long)arg0 element:(id)arg1 orientation:(long long)arg2 uniqueID:(id)arg3;
- (BOOL)isFullscreen;

@end