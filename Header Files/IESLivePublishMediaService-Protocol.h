//
//     Generated by private class-dump
//

@protocol IESLivePublishMediaService <NSObject>

@optional

- (BOOL)convertTSSegmentsToMOVWithTSPaths:(id)arg0 outputPath:(id)arg1;
- (void)publishBackRecordedVideo:(id)arg0 roomID:(id)arg1 anchorUsername:(id)arg2 anchorUserID:(id)arg3 anchorDisplayID:(id)arg4 enterFrom:(id)arg5 began:(id /* block */)arg6 progress:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)saveDraftWithBackRecordVideo:(id)arg0 roomID:(id)arg1 anchorUsername:(id)arg2 anchorUserID:(id)arg3 anchorDisplayID:(id)arg4 enterFrom:(id)arg5 completion:(id /* block */)arg6;
- (void)publishRecordedVideo:(id)arg0 roomID:(id)arg1 anchorUsername:(id)arg2 anchorUserID:(id)arg3 anchorDisplayID:(id)arg4 roomCreatedTime:(id)arg5 startTime:(id)arg6 endTime:(id)arg7 watermarkFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg8 enterFrom:(id)arg9 extraDict:(id)arg10 began:(id /* block */)arg11 progress:(id /* block */)arg12 completion:(id /* block */)arg13;
- (void)saveDraftWithVideo:(id)arg0 roomID:(id)arg1 anchorUsername:(id)arg2 anchorUserID:(id)arg3 anchorDisplayID:(id)arg4 roomCreatedTime:(id)arg5 startTime:(id)arg6 endTime:(id)arg7 watermarkFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg8 enterFrom:(id)arg9 completion:(id /* block */)arg10;
- (void)saveDraftWithVideo:(id)arg0 roomID:(id)arg1 anchorUsername:(id)arg2 anchorUserID:(id)arg3 anchorDisplayID:(id)arg4 roomCreatedTime:(id)arg5 startTime:(id)arg6 endTime:(id)arg7 watermarkFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg8 enterFrom:(id)arg9 params:(id)arg10 completion:(id /* block */)arg11;
- (void)saveDraftWithVideo:(id)arg0 roomID:(id)arg1 anchorUsername:(id)arg2 anchorUserID:(id)arg3 roomCreatedTime:(id)arg4 startTime:(id)arg5 endTime:(id)arg6 watermarkFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg7 enterFrom:(id)arg8 params:(id)arg9 completion:(id /* block */)arg10;
- (void)saveDraftWithVideoID:(id)arg0 videoURL:(id)arg1 title:(id)arg2 roomID:(id)arg3 roomTimeStr:(id)arg4 startTime:(id)arg5 endTime:(id)arg6 enterFrom:(id)arg7 fragmentID:(id)arg8 shoppingExtras:(id)arg9 params:(id)arg10 promotionID:(id)arg11 progress:(id /* block */)arg12 completion:(id /* block */)arg13 cancelBlockPasser:(id /* block */)arg14;
- (void)publishPlaybackWithRoomID:(id)arg0 cover:(id)arg1 title:(id)arg2 duration:(id)arg3 enterFrom:(id)arg4 fragmentID:(id)arg5 completion:(id /* block */)arg6;
- (void)publishHighlight:(id)arg0 videoURL:(id)arg1 title:(id)arg2 roomID:(id)arg3 roomTimeStr:(id)arg4 startTime:(id)arg5 endTime:(id)arg6 enterFrom:(id)arg7 fragmentID:(id)arg8 shoppingExtras:(id)arg9 promotionID:(id)arg10 completion:(id /* block */)arg11;

@end
