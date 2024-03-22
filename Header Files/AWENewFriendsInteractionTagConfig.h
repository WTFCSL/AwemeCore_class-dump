//
//     Generated by private class-dump
//

@class UIColor, NSArray, NSString, UIFont, UIImage;

@interface AWENewFriendsInteractionTagConfig : NSObject {
    long long _style;
    NSArray *_userAvartarList;
    double _userAvaratWidth;
    UIColor *_backgroundColor;
    NSString *_userNameText;
    UIFont *_userNameTextFont;
    UIColor *_userNameTextColor;
    NSString *_detailText;
    UIFont *_detailTextFont;
    UIColor *_detailTextColor;
    UIImage *_rightIconImage;
    UIImage *_selectedIconImage;
    UIImage *_unselectedIconImage;
    id /* block */ _iconTapAction;
}

@property (nonatomic) long long style;
@property (copy, nonatomic) NSArray *userAvartarList;
@property (nonatomic) double userAvaratWidth;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *userNameText;
@property (retain, nonatomic) UIFont *userNameTextFont;
@property (retain, nonatomic) UIColor *userNameTextColor;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIFont *detailTextFont;
@property (retain, nonatomic) UIColor *detailTextColor;
@property (retain, nonatomic) UIImage *rightIconImage;
@property (retain, nonatomic) UIImage *selectedIconImage;
@property (retain, nonatomic) UIImage *unselectedIconImage;
@property (copy, nonatomic) id /* block */ iconTapAction;

+ (id)singleCommentConfig;
+ (id)defaultConfig;

- (void)setUserAvaratWidth:(double)arg0;
- (void)setUserNameTextFont:(id)arg0;
- (void)setUserNameTextColor:(id)arg0;
- (void)setDetailTextFont:(id)arg0;
- (void)setRightIconImage:(id)arg0;
- (void)setUnselectedIconImage:(id)arg0;
- (void)setSelectedIconImage:(id)arg0;
- (id)userAvartarList;
- (void)setUserAvartarList:(id)arg0;
- (double)userAvaratWidth;
- (id)userNameText;
- (void)setUserNameText:(id)arg0;
- (id)userNameTextFont;
- (id)userNameTextColor;
- (id)detailTextFont;
- (id)rightIconImage;
- (id)selectedIconImage;
- (id)unselectedIconImage;
- (id /* block */)iconTapAction;
- (void)setIconTapAction:(id /* block */)arg0;
- (long long)style;
- (id)detailText;
- (void).cxx_destruct;
- (void)setDetailText:(id)arg0;
- (id)backgroundColor;
- (void)setStyle:(long long)arg0;
- (void)setBackgroundColor:(id)arg0;
- (void)setDetailTextColor:(id)arg0;
- (id)detailTextColor;

@end
