//
//     Generated by private class-dump
//

@class IESPortraitConfig;

@interface AWECommonPortraitHandler : NSObject {
    id /* block */ _portraitGetter;
    IESPortraitConfig *_portraitConfig;
}

@property (retain, nonatomic) IESPortraitConfig *portraitConfig;
@property (copy, nonatomic) id /* block */ portraitGetter;

- (id)getPortrait;
- (id /* block */)portraitGetter;
- (id)initWithPortraitGetter:(id /* block */)arg0 config:(id)arg1;
- (id)portraitConfig;
- (void)setPortraitGetter:(id /* block */)arg0;
- (void)setPortraitConfig:(id)arg0;
- (void).cxx_destruct;

@end
