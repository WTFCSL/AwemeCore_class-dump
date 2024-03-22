//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveFunctionSquareViewSceneConfig : NSObject {
    BOOL _alwaysShowNavSearchButton;
    BOOL _hideCloseButton;
    double _viewHeight;
    double _titleTopMargin;
    unsigned long long _scene;
    NSString *_backgroundColorHexStr;
    double _bgCornerRadius;
}

@property (readonly, nonatomic) double viewHeight;
@property (readonly, nonatomic) double titleTopMargin;
@property (readonly, nonatomic) BOOL alwaysShowNavSearchButton;
@property (readonly, nonatomic) BOOL hideCloseButton;
@property (readonly, nonatomic) unsigned long long scene;
@property (readonly, copy, nonatomic) NSString *backgroundColorHexStr;
@property (readonly, nonatomic) double bgCornerRadius;

- (BOOL)hideCloseButton;
- (double)bgCornerRadius;
- (id)backgroundColorHexStr;
- (BOOL)alwaysShowNavSearchButton;
- (id)initWithScene:(unsigned long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)scene;
- (double)viewHeight;
- (double)titleTopMargin;

@end
