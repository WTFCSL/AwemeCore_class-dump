//
//     Generated by private class-dump
//

@class NSString;

@interface TTADataCheckMobileUseableModel : TTADataRespModel {
    BOOL _isUnusable;
    BOOL _isVerified;
    BOOL _mnoSupport;
    NSString *_ticket;
}

@property (nonatomic) BOOL isUnusable;
@property (nonatomic) BOOL isVerified;
@property (nonatomic) BOOL mnoSupport;
@property (copy, nonatomic) NSString *ticket;

+ (id)tta_modelCustomPropertyMapper;

- (BOOL)isUnusable;
- (void)setIsUnusable:(BOOL)arg0;
- (BOOL)mnoSupport;
- (void)setMnoSupport:(BOOL)arg0;
- (void).cxx_destruct;
- (id)ticket;
- (void)setTicket:(id)arg0;
- (BOOL)isVerified;
- (void)setIsVerified:(BOOL)arg0;

@end
