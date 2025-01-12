//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESLiveLGameDuringLiveModel : NSObject {
    NSNumber *_roomID;
    NSString *_gameID;
    NSString *_gameName;
    NSString *_gameType;
    NSString *_gameIconURL;
    NSString *_gameDescription;
    NSString *_taskID;
    NSString *_startID;
    unsigned long long _explainStatus;
}

@property (copy, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameType;
@property (copy, nonatomic) NSString *gameIconURL;
@property (copy, nonatomic) NSString *gameDescription;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *startID;
@property (nonatomic) unsigned long long explainStatus;

- (id)gameName;
- (void)setGameName:(id)arg0;
- (void)setGameID:(id)arg0;
- (id)gameDescription;
- (void)setGameDescription:(id)arg0;
- (unsigned long long)explainStatus;
- (void)setExplainStatus:(unsigned long long)arg0;
- (id)gameIconURL;
- (void)setGameIconURL:(id)arg0;
- (void).cxx_destruct;
- (id)taskID;
- (void)setTaskID:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)gameType;
- (void)setGameType:(id)arg0;
- (id)startID;
- (void)setStartID:(id)arg0;
- (id)gameID;

@end
