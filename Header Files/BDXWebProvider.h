//
//     Generated by private class-dump
//

@class BDWKPrecreator;

@interface BDXWebProvider : NSObject {
    BDWKPrecreator *_precreator;
}

@property (retain, nonatomic) BDWKPrecreator *precreator;
@property (nonatomic) long long maxNumberOfInstances;

+ (void)preCreateExecture;
+ (id)sharedInstance;

- (long long)maxNumberOfInstances;
- (void)setMaxNumberOfInstances:(long long)arg0;
- (id)fetchWebViewWithIsFromCache:(BOOL *)arg0;
- (id)precreator;
- (void)setPrecreator:(id)arg0;
- (void).cxx_destruct;

@end
