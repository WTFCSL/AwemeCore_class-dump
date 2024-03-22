//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableDictionary, NSString;

@interface BDTuringParameter : NSObject {
    NSString *_appID;
    NSDictionary *_parameter;
    long long _timestamp;
    NSMutableDictionary *_creators;
}

@property (copy) NSDictionary *parameter;
@property (nonatomic) long long timestamp;
@property (retain, nonatomic) NSMutableDictionary *creators;
@property (copy, nonatomic) NSString *appID;

+ (id)sharedInstance;

- (id)modelWithParameter:(id)arg0;
- (void)addCreator:(Class)arg0;
- (id)currentParameter;
- (void)updateCurrentParameter:(id)arg0;
- (void)setCreators:(id)arg0;
- (id)creators;
- (id)init;
- (void)setAppID:(id)arg0;
- (long long)timestamp;
- (void).cxx_destruct;
- (id)appID;
- (void)setTimestamp:(long long)arg0;
- (id)parameter;
- (void)setParameter:(id)arg0;

@end
