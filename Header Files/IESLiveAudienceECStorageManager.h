//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface IESLiveAudienceECStorageManager : NSObject {
    NSMutableDictionary *_dict;
}

@property (retain, nonatomic) NSMutableDictionary *dict;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)dict;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (id)stringValueForKey:(id)arg0;
- (void)setDict:(id)arg0;

@end
