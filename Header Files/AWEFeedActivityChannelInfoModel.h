//
//     Generated by private class-dump
//

@class AWEFeedActivityTopBarItemConfig, NSString, NSArray, NSDictionary;

@interface AWEFeedActivityChannelInfoModel : MTLModel <MTLJSONSerializing, AWEFeedActivityChannelInfoProtocol> {
    NSString *_activityID;
    long long _topTabTheme;
    long long _bottomTabTheme;
    long long _startTime;
    long long _endTime;
    AWEFeedActivityTopBarItemConfig *_topBarItemConfig;
    NSArray *_badgeArray;
    NSArray *_bubbleArray;
    NSDictionary *_extraInfo;
}

@property (readonly, copy, nonatomic) NSString *activityID;
@property (readonly, nonatomic) long long topTabTheme;
@property (readonly, nonatomic) long long bottomTabTheme;
@property (readonly, nonatomic) long long startTime;
@property (readonly, nonatomic) long long endTime;
@property (readonly, nonatomic) AWEFeedActivityTopBarItemConfig *topBarItemConfig;
@property (readonly, nonatomic) NSArray *badgeArray;
@property (readonly, nonatomic) NSArray *bubbleArray;
@property (readonly, copy, nonatomic) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)badgeArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)badgeArray;
- (id)bubbleArray;
- (id)topBarItemConfig;
- (long long)topTabTheme;
- (long long)bottomTabTheme;
- (void).cxx_destruct;
- (long long)endTime;
- (long long)startTime;
- (BOOL)isValidWithError:(id *)arg0;
- (id)activityID;
- (id)extraInfo;

@end
