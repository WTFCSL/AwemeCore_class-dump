//
//     Generated by private class-dump
//

@class NSString;

@interface AWERVXiGuaGuideShowModel : NSObject {
    BOOL _isForceGuide;
    NSString *_title;
    NSString *_coverURL;
    id /* block */ _xigGuideViewBlock;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverURL;
@property (nonatomic) BOOL isForceGuide;
@property (copy, nonatomic) id /* block */ xigGuideViewBlock;

- (BOOL)isForceGuide;
- (void)setIsForceGuide:(BOOL)arg0;
- (id /* block */)xigGuideViewBlock;
- (void)setXigGuideViewBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;
- (id)coverURL;
- (void)setCoverURL:(id)arg0;

@end