//
//     Generated by private class-dump
//

@class NSString;

@interface AWEGroupFilterModel : NSObject {
    BOOL _isUnread;
    BOOL _select;
    BOOL _isRedDotShow;
    unsigned long long _modelType;
    NSString *_title;
    NSString *_buttonTitle;
    NSString *_selectedImageName;
    id /* block */ _selectedBlock;
    id /* block */ _switchTabBlock;
}

@property (nonatomic) unsigned long long modelType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *selectedImageName;
@property (nonatomic) BOOL isUnread;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ switchTabBlock;
@property (nonatomic) BOOL select;
@property (nonatomic) BOOL isRedDotShow;

- (void)setIsUnread:(BOOL)arg0;
- (void)setSelectedBlock:(id /* block */)arg0;
- (id /* block */)selectedBlock;
- (id)selectedImageName;
- (void)setSelectedImageName:(id)arg0;
- (id /* block */)switchTabBlock;
- (void)setSwitchTabBlock:(id /* block */)arg0;
- (BOOL)isRedDotShow;
- (void)setIsRedDotShow:(BOOL)arg0;
- (void)setModelType:(unsigned long long)arg0;
- (BOOL)select;
- (unsigned long long)modelType;
- (void).cxx_destruct;
- (void)setSelect:(BOOL)arg0;
- (BOOL)isUnread;
- (id)title;
- (id)buttonTitle;
- (void)setTitle:(id)arg0;
- (void)setButtonTitle:(id)arg0;

@end