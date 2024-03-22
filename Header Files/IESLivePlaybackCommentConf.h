//
//     Generated by private class-dump
//

@class NSString;

@interface IESLivePlaybackCommentConf : NSObject {
    BOOL _isLandscape;
    double _slideOffset;
    NSString *_placeholderText;
}

@property (nonatomic) BOOL isLandscape;
@property (nonatomic) double slideOffset;
@property (copy, nonatomic) NSString *placeholderText;

- (id)initWithDefaultConf;
- (double)slideOffset;
- (void)setSlideOffset:(double)arg0;
- (void).cxx_destruct;
- (void)setIsLandscape:(BOOL)arg0;
- (BOOL)isLandscape;
- (void)setPlaceholderText:(id)arg0;
- (id)placeholderText;

@end