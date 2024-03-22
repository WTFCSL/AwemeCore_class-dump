//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEPOIAnchorMaxNumberWithUidFrequencyController : NSObject <AWEPOIAnchorFrequencyControllerProtocol> {
    NSString *_scene;
    long long _maxShowTimes;
    NSMutableDictionary *_countDict;
}

@property (retain, nonatomic) NSString *scene;
@property (nonatomic) long long maxShowTimes;
@property (retain, nonatomic) NSMutableDictionary *countDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)countDict;
- (void)setCountDict:(id)arg0;
- (void)setMaxShowTimes:(long long)arg0;
- (long long)maxShowTimes;
- (id)initWithModel:(id)arg0 scene:(id)arg1;
- (BOOL)hasHitFrequencyControl:(long long)arg0;
- (long long)countForKey:(id)arg0 defaultValue:(long long)arg1;
- (BOOL)hasHitFrequencyControl;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (void)count;
- (void)count:(long long)arg0;
- (id)scene;
- (long long)countForKey:(id)arg0;

@end