//
//     Generated by private class-dump
//

@class NSString, AWEProfileHeaderContext;

@interface AWEProfileHeaderUpstairHintSectionViewModel : AWEBaseListSectionViewModel <AWEProfileHeaderSectionViewModelProtocol> {
    AWEProfileHeaderContext *_context;
}

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithContext:(id)arg0;
- (double)topPaddingWithUpperSection:(long long)arg0;
- (void).cxx_destruct;
- (long long)sectionType;
- (void)setContext:(id)arg0;
- (id)context;
- (struct CGSize { double x0; double x1; })sectionSize;

@end
