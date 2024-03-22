//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSPredicate;

@interface IESLiveFullLinkSettingsMatchItem : NSObject {
    NSString *_key;
    NSString *_value;
    NSDictionary *_params;
    NSPredicate *_predicate;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSPredicate *predicate;

- (BOOL)isMatch:(id)arg0;
- (id)key;
- (id)predicate;
- (void)setPredicate:(id)arg0;
- (void).cxx_destruct;
- (id)value;
- (void)setKey:(id)arg0;
- (id)params;
- (void)setValue:(id)arg0;
- (void)setParams:(id)arg0;

@end
