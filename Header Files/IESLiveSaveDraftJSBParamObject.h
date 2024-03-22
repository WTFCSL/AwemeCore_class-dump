//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface IESLiveSaveDraftJSBParamObject : NSObject {
    NSString *_videoID;
    NSString *_videoURL;
    NSString *_title;
    NSString *_roomID;
    NSString *_roomTimeStr;
    NSNumber *_startTime;
    NSNumber *_endTime;
    NSString *_enterFrom;
    NSString *_fragmentID;
    NSDictionary *_shoppingExtras;
    NSDictionary *_trackExtras;
    NSString *_promotionID;
}

@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *videoURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *roomTimeStr;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *fragmentID;
@property (copy, nonatomic) NSDictionary *shoppingExtras;
@property (copy, nonatomic) NSDictionary *trackExtras;
@property (copy, nonatomic) NSString *promotionID;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)promotionID;
- (void)setPromotionID:(id)arg0;
- (id)trackExtras;
- (void)setTrackExtras:(id)arg0;
- (id)fragmentID;
- (void)setFragmentID:(id)arg0;
- (id)roomTimeStr;
- (void)setRoomTimeStr:(id)arg0;
- (id)shoppingExtras;
- (void)setShoppingExtras:(id)arg0;
- (id)videoURL;
- (void)setStartTime:(id)arg0;
- (void).cxx_destruct;
- (id)endTime;
- (id)title;
- (id)startTime;
- (void)setVideoURL:(id)arg0;
- (void)setEndTime:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)videoID;
- (void)setVideoID:(id)arg0;

@end
