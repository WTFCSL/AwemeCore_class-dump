//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEPOIPrefetchModel : NSObject {
    NSString *_scene;
    NSString *_method;
    double _cacheDuration;
    NSDictionary *_extraParams;
}

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *method;
@property (nonatomic) double cacheDuration;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void)setCacheDuration:(double)arg0;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (double)cacheDuration;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)method;
- (void)setMethod:(id)arg0;
- (id)scene;

@end
