//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface DitoContainerRouterParams : NSObject {
    BOOL _shouldHideSketchNaviBar;
    BOOL _shouldHideSketchLoadingView;
    BOOL _shouldHideSketchErrorView;
    NSString *_scene;
    NSString *_requestPath;
    NSString *_enterFrom;
    NSDictionary *_bizParams;
    NSDictionary *_ditoParams;
    NSDictionary *_mobParams;
    unsigned long long _themeMode;
}

@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *requestPath;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *bizParams;
@property (retain, nonatomic) NSDictionary *ditoParams;
@property (retain, nonatomic) NSDictionary *mobParams;
@property (nonatomic) BOOL shouldHideSketchNaviBar;
@property (nonatomic) BOOL shouldHideSketchLoadingView;
@property (nonatomic) BOOL shouldHideSketchErrorView;
@property (nonatomic) unsigned long long themeMode;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)bizParams;
- (void)setBizParams:(id)arg0;
- (unsigned long long)themeMode;
- (void)setThemeMode:(unsigned long long)arg0;
- (id)mobParams;
- (void)setMobParams:(id)arg0;
- (id)ditoParams;
- (void)setDitoParams:(id)arg0;
- (BOOL)shouldHideSketchNaviBar;
- (void)setShouldHideSketchNaviBar:(BOOL)arg0;
- (BOOL)shouldHideSketchLoadingView;
- (void)setShouldHideSketchLoadingView:(BOOL)arg0;
- (BOOL)shouldHideSketchErrorView;
- (void)setShouldHideSketchErrorView:(BOOL)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)scene;
- (id)requestPath;
- (void)setRequestPath:(id)arg0;

@end
