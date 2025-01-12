//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLivePublicScreenFontSizeProvider;

@interface IESLivePublicScreenFontSizeSystemProvider : NSObject <IESLivePublicScreenFontSizeProvider> {
    id<IESLivePublicScreenFontSizeProvider> nextProvider;
}

@property (retain, nonatomic) id<IESLivePublicScreenFontSizeProvider> nextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)systemFontSize;

- (void)setNextProvider:(id)arg0;
- (id)nextProvider;
- (void).cxx_destruct;
- (unsigned long long)currentFontSize;

@end
