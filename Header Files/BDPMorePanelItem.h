//
//     Generated by private class-dump
//

@class UIColor, NSString, BDPBaseContext, UIImage, NSURL, UIView, NSNumber;
@protocol BDPMorePanelInterface;

@interface BDPMorePanelItem : NSObject {
    BOOL _isSecondRowItem;
    BOOL _isGameType;
    BOOL _isAutoDismiss;
    long long _order;
    NSString *_englishName;
    NSString *_name;
    UIColor *_textColor;
    UIImage *_icon;
    NSURL *_higherDefinitionIconUrl;
    NSURL *_iconURL;
    NSNumber *_alpha;
    long long _type;
    id /* block */ _action;
    UIView *_reddot;
    BDPBaseContext *_context;
    id<BDPMorePanelInterface> _panel;
}

@property (nonatomic) long long priority;
@property (readonly, nonatomic) BOOL canHidden;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSURL *iconURL;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) UIView *reddot;
@property (nonatomic) BOOL isSecondRowItem;
@property (nonatomic) long long order;
@property (readonly, copy, nonatomic) NSString *englishName;
@property (readonly, nonatomic) NSURL *higherDefinitionIconUrl;
@property (copy, nonatomic) NSNumber *alpha;
@property (retain, nonatomic) BDPBaseContext *context;
@property (nonatomic) BOOL isGameType;
@property (weak, nonatomic) id<BDPMorePanelInterface> panel;
@property (nonatomic) BOOL isAutoDismiss;

+ (id)itemWithType:(long long)arg0 name:(id)arg1 icon:(id)arg2 action:(id /* block */)arg3;
+ (id)itemWithName:(id)arg0 icon:(id)arg1 action:(id /* block */)arg2;
+ (id)itemWithName:(id)arg0 iconURL:(id)arg1 action:(id /* block */)arg2;
+ (id)itemWithType:(long long)arg0 name:(id)arg1 icon:(id)arg2 reddot:(id)arg3 action:(id /* block */)arg4;
+ (id)itemWithName:(id)arg0 icon:(id)arg1 higherDefinitionIconUrl:(id)arg2 action:(id /* block */)arg3;

- (BOOL)canHidden;
- (id)initWithType:(long long)arg0 name:(id)arg1 icon:(id)arg2 iconURL:(id)arg3 action:(id /* block */)arg4;
- (id)reddot;
- (void)setReddot:(id)arg0;
- (BOOL)isGameType;
- (BOOL)isAutoDismiss;
- (void)setIsAutoDismiss:(BOOL)arg0;
- (id)initWithType:(long long)arg0 name:(id)arg1 textColor:(id)arg2 icon:(id)arg3 iconURL:(id)arg4 action:(id /* block */)arg5;
- (BOOL)isSecondRowItem;
- (id)initWithType:(long long)arg0 name:(id)arg1 textColor:(id)arg2 icon:(id)arg3 higherDefinitionIconUrl:(id)arg4 iconURL:(id)arg5 reddot:(id)arg6 action:(id /* block */)arg7;
- (id)initWithType:(long long)arg0 name:(id)arg1 icon:(id)arg2 higherDefinitionIconUrl:(id)arg3 iconURL:(id)arg4 action:(id /* block */)arg5;
- (id)initWithType:(long long)arg0 name:(id)arg1 textColor:(id)arg2 icon:(id)arg3 higherDefinitionIconUrl:(id)arg4 iconURL:(id)arg5 action:(id /* block */)arg6;
- (BOOL)itemIsInSecondRowWithName:(id)arg0;
- (id)getEnglishhNameWithName:(id)arg0;
- (void)setIsSecondRowItem:(BOOL)arg0;
- (id)higherDefinitionIconUrl;
- (void)setIsGameType:(BOOL)arg0;
- (long long)order;
- (id)icon;
- (void)setOrder:(long long)arg0;
- (void).cxx_destruct;
- (void)setAlpha:(id)arg0;
- (void)setIconURL:(id)arg0;
- (void)setContext:(id)arg0;
- (id)iconURL;
- (long long)type;
- (void)setPriority:(long long)arg0;
- (void)setType:(long long)arg0;
- (id)context;
- (unsigned long long)hash;
- (void)setAction:(id /* block */)arg0;
- (void)setName:(id)arg0;
- (id /* block */)action;
- (void)setIcon:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (id)alpha;
- (id)description;
- (void)setTextColor:(id)arg0;
- (long long)priority;
- (id)name;
- (id)textColor;
- (id)panel;
- (void)updateAction:(id /* block */)arg0;
- (void)setPanel:(id)arg0;
- (id)englishName;

@end