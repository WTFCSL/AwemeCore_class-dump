//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEAdOpenLiveRoomParamModel : BDXBridgeModel {
    NSArray *_roomIDList;
    NSString *_enterFrom;
    NSString *_currentRoomID;
}

@property (copy, nonatomic) NSArray *roomIDList;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *currentRoomID;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(id)arg0;
- (id)currentRoomID;
- (id)enterFrom;
- (id)roomIDList;
- (void)setRoomIDList:(id)arg0;
- (void)setCurrentRoomID:(id)arg0;
- (void).cxx_destruct;

@end
