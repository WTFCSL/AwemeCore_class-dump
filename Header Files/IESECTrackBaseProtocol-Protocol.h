//
//     Generated by private class-dump
//

@class NSDictionary;
@protocol IESECAdTrackContext;

@protocol IESECTrackBaseProtocol <NSObject>

@property (copy, nonatomic) NSDictionary *bussinissParams;
@property (copy, nonatomic) id<IESECAdTrackContext> adContext;

- (void)setBussinissParams:(id)arg0;
- (id)bussinissParams;
- (void)addBussinissParams:(id)arg0;
- (id)adContext;
- (void)setAdContext:(id)arg0;

@end