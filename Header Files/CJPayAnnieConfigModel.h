//
//     Generated by private class-dump
//

@class NSArray;

@interface CJPayAnnieConfigModel : JSONModel {
    BOOL _enableAnnieXCard;
    NSArray *_allowUrlList;
}

@property (nonatomic) BOOL enableAnnieXCard;
@property (copy, nonatomic) NSArray *allowUrlList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (BOOL)enableAnnieXCard;
- (id)allowUrlList;
- (void)setEnableAnnieXCard:(BOOL)arg0;
- (void)setAllowUrlList:(id)arg0;
- (void).cxx_destruct;

@end
