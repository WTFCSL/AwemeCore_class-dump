//
//     Generated by private class-dump
//

@class NSString, HTSLiveRoom;

@interface IESLiveDislikeInfoBox : NSObject {
    BOOL _roomIsHot;
    HTSLiveRoom *_dislikeRoom;
    NSString *_roomEnterFrom;
    NSString *_roomEnterMethod;
    NSString *_feedPageFrom;
    long long _dislikeEnterFromType;
}

@property (retain, nonatomic) HTSLiveRoom *dislikeRoom;
@property (copy, nonatomic) NSString *roomEnterFrom;
@property (copy, nonatomic) NSString *roomEnterMethod;
@property (copy, nonatomic) NSString *feedPageFrom;
@property (nonatomic) BOOL roomIsHot;
@property (nonatomic) long long dislikeEnterFromType;

- (id)dislikeRoom;
- (void)setDislikeRoom:(id)arg0;
- (id)roomEnterFrom;
- (void)setRoomEnterFrom:(id)arg0;
- (id)roomEnterMethod;
- (void)setRoomEnterMethod:(id)arg0;
- (id)feedPageFrom;
- (void)setFeedPageFrom:(id)arg0;
- (BOOL)roomIsHot;
- (void)setRoomIsHot:(BOOL)arg0;
- (long long)dislikeEnterFromType;
- (void)setDislikeEnterFromType:(long long)arg0;
- (void).cxx_destruct;

@end
