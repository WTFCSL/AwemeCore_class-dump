//
//     Generated by private class-dump
//

@class NSArray;

@interface IESLiveResolutionChooseViewBaseConfig : NSObject {
    BOOL _forLandscape;
    NSArray *_resolutionItemArray;
    unsigned long long _currentIndex;
}

@property (copy, nonatomic) NSArray *resolutionItemArray;
@property (nonatomic, getter=isForLandscape) BOOL forLandscape;
@property (nonatomic) unsigned long long currentIndex;

- (void)setForLandscape:(BOOL)arg0;
- (void)setResolutionItemArray:(id)arg0;
- (BOOL)isForLandscape;
- (id)resolutionItemArray;
- (void).cxx_destruct;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg0;

@end