//
//     Generated by private class-dump
//

@class CKBeautyCategoryModel, NSString;

@interface CKBeautyCategoryStatusModel : NSObject <CKScorageBizModel, CKScorageBindable> {
    BOOL _selected;
    CKBeautyCategoryModel *_bindTo;
}

@property (weak, nonatomic) CKBeautyCategoryModel *bindTo;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bindTo;
- (void)setBindTo:(id)arg0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg0;
- (BOOL)isSelected;

@end
