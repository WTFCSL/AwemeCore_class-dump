//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel;

@protocol AWEAwemeDetailViewControllerProtocol <NSObject>

@property (nonatomic, retain) AWEAwemeModel *model;
@property (nonatomic, copy) NSString *referString;
@property (nonatomic, readonly) NSString *sharerUID;
@property (nonatomic, copy) NSDictionary *logExtraDict;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)sharerUID;
- (void)handleRequestModelCompletely:(id)arg0;
- (void)setModel:(id)arg0;
- (id)model;

@end
