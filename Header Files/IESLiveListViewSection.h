//
//     Generated by private class-dump
//

@class NSArray, NSString, UIColor;

@interface IESLiveListViewSection : NSObject <IESLiveSectionProtocol> {
    NSArray *itemArray;
    Class classForFooter;
    Class classForHeader;
    double heightForFooter;
    double heightForHeader;
    NSString *headerString;
    NSString *footerString;
    UIColor *headerColor;
}

@property (copy, nonatomic) NSArray *itemArray;
@property (retain, nonatomic) Class classForHeader;
@property (nonatomic) double heightForHeader;
@property (copy, nonatomic) NSString *headerString;
@property (retain, nonatomic) Class classForFooter;
@property (nonatomic) double heightForFooter;
@property (copy, nonatomic) NSString *footerString;
@property (retain, nonatomic) UIColor *headerColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)headerColor;
- (id)itemArray;
- (void)setItemArray:(id)arg0;
- (void)setHeightForHeader:(double)arg0;
- (void)setClassForHeader:(Class)arg0;
- (void)setHeightForFooter:(double)arg0;
- (void)setClassForFooter:(Class)arg0;
- (Class)classForHeader;
- (Class)classForFooter;
- (id)init;
- (void).cxx_destruct;
- (id)headerString;
- (id)footerString;
- (void)setHeaderString:(id)arg0;
- (double)heightForHeader;
- (double)heightForFooter;
- (void)setFooterString:(id)arg0;
- (void)setHeaderColor:(id)arg0;

@end