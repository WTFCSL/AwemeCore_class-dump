//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESECSpecStateHelper : NSObject {
    NSString *_index;
    NSArray *_specItemIDList;
    NSString *_selectedSpecItemID;
    NSArray *_otherSpecSelectedItemIDList;
}

@property (retain, nonatomic) NSString *index;
@property (retain, nonatomic) NSArray *specItemIDList;
@property (retain, nonatomic) NSString *selectedSpecItemID;
@property (retain, nonatomic) NSArray *otherSpecSelectedItemIDList;

- (id)selectedSpecItemID;
- (id)specItemIDList;
- (void)setSpecItemIDList:(id)arg0;
- (void)setSelectedSpecItemID:(id)arg0;
- (id)otherSpecSelectedItemIDList;
- (void)setOtherSpecSelectedItemIDList:(id)arg0;
- (void)setIndex:(id)arg0;
- (void).cxx_destruct;
- (id)index;

@end
