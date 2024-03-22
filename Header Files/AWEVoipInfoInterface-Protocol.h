//
//     Generated by private class-dump
//

@class NSString, NSSet, NSDictionary;

@protocol AWEVoipInfoInterface <NSObject>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *callerID;
@property (readonly, nonatomic) BOOL isCaller;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSSet *participatorIDs;
@property (readonly, nonatomic) BOOL firstFrameArrived;
@property (readonly, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) BOOL isMultipleCalls;
@property (nonatomic) unsigned long long voipType;

- (unsigned long long)voipType;
- (BOOL)firstFrameArrived;
- (id)participatorIDs;
- (BOOL)isMultipleCalls;
- (void)setIsMultipleCalls:(BOOL)arg0;
- (void)setVoipType:(unsigned long long)arg0;
- (id)callerID;
- (id)conversationID;
- (id)identifier;
- (id)extraInfo;
- (BOOL)isCaller;

@end
