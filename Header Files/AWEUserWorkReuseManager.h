//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEUserWorkReuseManager : NSObject {
    NSMutableDictionary *_imagesDict;
}

@property (retain, nonatomic) NSMutableDictionary *imagesDict;

+ (id)sharedInstance;

- (id)reuseImageWithKey:(id)arg0 cacheName:(id)arg1;
- (void)buildReuseImages:(id)arg0 cacheName:(id)arg1 afterDemount:(double)arg2;
- (id)imagesDict;
- (void)setImagesDict:(id)arg0;
- (void).cxx_destruct;

@end
