//
//     Generated by private class-dump
//

@class NSString, NSArray;
@protocol CJPayAuthDisplayContentModel;

@interface CJPayAuthDisplayMultiContentModel : JSONModel {
    NSString *_oneDisplayDesc;
    NSArray<CJPayAuthDisplayContentModel> *_secondDisplayContents;
}

@property (copy, nonatomic) NSString *oneDisplayDesc;
@property (copy, nonatomic) NSArray<CJPayAuthDisplayContentModel> *secondDisplayContents;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)oneDisplayDesc;
- (void)setOneDisplayDesc:(id)arg0;
- (id)secondDisplayContents;
- (void)setSecondDisplayContents:(id)arg0;
- (void).cxx_destruct;

@end