//
//     Generated by private class-dump
//

@class NSString;

@interface AWECommerceActivityTimeRange : MTLModel <MTLJSONSerializing> {
    double _start;
    double _end;
}

@property (nonatomic) double start;
@property (nonatomic) double end;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnd:(double)arg0;
- (double)end;
- (void)setStart:(double)arg0;
- (double)start;

@end
