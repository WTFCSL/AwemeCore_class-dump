//
//     Generated by private class-dump
//

@class NSString;

@interface AWEECOMIMTextActionButtonModel : NSObject {
    BOOL _disable;
    BOOL _hasNoPermisssion;
    NSString *_name;
    NSString *_actionTypeString;
    NSString *_extra;
    NSString *_tips;
    id /* block */ _buttonActionBlock;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL disable;
@property (copy, nonatomic) NSString *actionTypeString;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *tips;
@property (nonatomic) BOOL hasNoPermisssion;
@property (copy, nonatomic) id /* block */ buttonActionBlock;

- (void)setExtra:(id)arg0;
- (void)setDisable:(BOOL)arg0;
- (void)setActionTypeString:(id)arg0;
- (void)setHasNoPermisssion:(BOOL)arg0;
- (id)actionTypeString;
- (BOOL)hasNoPermisssion;
- (id)tips;
- (void).cxx_destruct;
- (id)extra;
- (void)setTips:(id)arg0;
- (BOOL)disable;
- (void)setName:(id)arg0;
- (id)name;
- (id /* block */)buttonActionBlock;
- (void)setButtonActionBlock:(id /* block */)arg0;

@end
