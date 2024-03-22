//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AFDFastReplyRegisterItem : NSObject <AFDFastReplyRegisterItemProtocol> {
    Class _strategyClass;
    NSString *_title;
    NSString *_detail;
    NSArray *_owners;
    NSString *_lineOfBusiness;
    unsigned long long _elementPriority;
    long long _strategyPriority;
}

@property (retain, nonatomic) Class strategyClass;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *lineOfBusiness;
@property (copy, nonatomic) NSArray *owners;
@property (nonatomic) unsigned long long elementPriority;
@property (nonatomic) long long strategyPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)strategyClass;
- (void)setStrategyClass:(Class)arg0;
- (void)setLineOfBusiness:(id)arg0;
- (void)setElementPriority:(unsigned long long)arg0;
- (void)setStrategyPriority:(long long)arg0;
- (id)lineOfBusiness;
- (unsigned long long)elementPriority;
- (long long)strategyPriority;
- (void)setDetail:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)detail;
- (void)setTitle:(id)arg0;
- (void)setOwners:(id)arg0;
- (id)owners;

@end