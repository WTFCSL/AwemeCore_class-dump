//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESLiveGamePromoteSendAdEventAdExtraDataModel : IESLiveBridgeModel {
    NSString *_anchorId;
    NSString *_roomId;
    NSString *_gameId;
    NSString *_gameName;
    NSNumber *_gameStatus;
}

@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (retain, nonatomic) NSNumber *gameStatus;

+ (id)modelCustomPropertyMapper;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (id)gameName;
- (void)setGameName:(id)arg0;
- (id)anchorId;
- (void)setAnchorId:(id)arg0;
- (void)setGameStatus:(id)arg0;
- (id)gameStatus;
- (id)gameId;
- (void)setGameId:(id)arg0;
- (void).cxx_destruct;

@end
