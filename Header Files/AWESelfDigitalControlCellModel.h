//
//     Generated by private class-dump
//

@class NSString;

@interface AWESelfDigitalControlCellModel : NSObject {
    BOOL _isEnable;
    NSString *_itemTitle;
    NSString *_desc;
    NSString *_iconName;
    NSString *_rightTitle;
    id /* block */ _cellTappedBlock;
}

@property (copy, nonatomic) NSString *itemTitle;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *rightTitle;
@property (nonatomic) BOOL isEnable;
@property (copy, nonatomic) id /* block */ cellTappedBlock;

- (void)setIsEnable:(BOOL)arg0;
- (BOOL)isEnable;
- (id /* block */)cellTappedBlock;
- (void)setCellTappedBlock:(id /* block */)arg0;
- (id)desc;
- (void).cxx_destruct;
- (id)iconName;
- (void)setIconName:(id)arg0;
- (void)setDesc:(id)arg0;
- (id)itemTitle;
- (void)setItemTitle:(id)arg0;
- (void)setRightTitle:(id)arg0;
- (id)rightTitle;

@end
