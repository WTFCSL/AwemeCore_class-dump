//
//     Generated by private class-dump
//

@class NSNumber, NSArray;

@interface AWEHPTabConfigModel : AWEBaseApiModel {
    NSNumber *_editMode;
    NSNumber *_longPressEdit;
    NSNumber *_hotSwitchType;
    NSNumber *_hotSwitchStrategy;
    NSNumber *_requestInterval;
    NSArray *_sortConfigList;
}

@property (copy, nonatomic) NSNumber *editMode;
@property (copy, nonatomic) NSNumber *longPressEdit;
@property (copy, nonatomic) NSNumber *hotSwitchType;
@property (copy, nonatomic) NSNumber *hotSwitchStrategy;
@property (copy, nonatomic) NSNumber *requestInterval;
@property (copy, nonatomic) NSArray *sortConfigList;

+ (id)sortConfigListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)hotSwitchType;
- (id)sortConfigList;
- (id)longPressEdit;
- (void)setLongPressEdit:(id)arg0;
- (void)setHotSwitchType:(id)arg0;
- (id)hotSwitchStrategy;
- (void)setHotSwitchStrategy:(id)arg0;
- (void)setSortConfigList:(id)arg0;
- (void).cxx_destruct;
- (id)requestInterval;
- (void)setRequestInterval:(id)arg0;
- (id)editMode;
- (void)setEditMode:(id)arg0;

@end
