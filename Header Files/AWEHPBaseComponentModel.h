//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSDictionary;

@interface AWEHPBaseComponentModel : NSObject <NSCopying> {
    NSString *_componentID;
    NSMutableArray *_tabIDStack;
    NSDictionary *_bizTrackParams;
}

@property (copy, nonatomic) NSString *componentID;
@property (retain, nonatomic) NSMutableArray *tabIDStack;
@property (copy, nonatomic) NSDictionary *bizTrackParams;

- (id)bizTrackParams;
- (void)setTabIDStack:(id)arg0;
- (id)tabIDStack;
- (void)setBizTrackParams:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (BOOL)isValid;
- (id)componentID;
- (void)setComponentID:(id)arg0;

@end