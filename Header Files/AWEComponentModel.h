//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEComponentModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_hideMarquee;
    NSNumber *_numberOfLineInDesc;
}

@property (retain, nonatomic) NSNumber *hideMarquee;
@property (retain, nonatomic) NSNumber *numberOfLineInDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)hideMarquee;
- (void)setHideMarquee:(id)arg0;
- (id)numberOfLineInDesc;
- (void)setNumberOfLineInDesc:(id)arg0;
- (void).cxx_destruct;

@end